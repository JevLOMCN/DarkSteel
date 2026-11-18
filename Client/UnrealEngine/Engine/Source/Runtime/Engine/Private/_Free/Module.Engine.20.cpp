// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 663

// CurveWeights'' @ 1410d7ac0

void __cdecl `dynamic_initializer_for_'UE::Anim::FBaseBlendedCurve_DEPRECATED::CurveWeights__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Anim::FBaseBlendedCurve_DEPRECATED::CurveWeights__);
  return;
}

// TypeName'' @ 1410d7ae0

void __cdecl `dynamic_initializer_for_'UE::Anim::FAnimInertializationSyncScope::TypeName__(void)

{
  ::FName::FName(&UE::Anim::FAnimInertializationSyncScope::TypeName,
                 L"UE::Anim::FAnimInertializationSyncScope");
  return;
}

// TypeName'' @ 1410d7b00

void __cdecl `dynamic_initializer_for_'UE::Anim::IAnimEventsFilterContext::TypeName__(void)

{
  ::FName::FName(&UE::Anim::IAnimEventsFilterContext::TypeName,L"UE::Anim::IAnimEventsFilterContext"
                );
  return;
}

// ValidCurveWeights'' @ 1410d7b20

void __cdecl
`dynamic_initializer_for_'UE::Anim::FBaseBlendedCurve_DEPRECATED::ValidCurveWeights__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Anim::FBaseBlendedCurve_DEPRECATED::ValidCurveWeights__
        );
  return;
}

// `dynamic_initializer_for_'CVarAnimConstantKeyLerpISPCEnabled'' @ 1410d7b40

void __cdecl _dynamic_initializer_for__CVarAnimConstantKeyLerpISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimConstantKeyLerpISPCEnabled,L"a.ConstantKeyLerp.ISPC",
             &bAnim_ConstantKeyLerp_ISPC_Enabled,
             L"Whether to use ISPC optimizations in constant key anim encoding",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimConstantKeyLerpISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarAnimPerTrackCompressionISPCEnabled'' @ 1410d7b90

void __cdecl _dynamic_initializer_for__CVarAnimPerTrackCompressionISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimPerTrackCompressionISPCEnabled,L"a.PerTrackCompression.ISPC",
             &bAnim_PerTrackCompression_ISPC_Enabled,
             L"Whether to use ISPC optimizations in per track anim encoding",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimPerTrackCompressionISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarAnimVariableKeyLerpISPCEnabled'' @ 1410d7be0

void __cdecl _dynamic_initializer_for__CVarAnimVariableKeyLerpISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimVariableKeyLerpISPCEnabled,L"a.VariableKeyLerp.ISPC",
             &bAnim_VariableKeyLerp_ISPC_Enabled,
             L"Whether to use ISPC optimizations in variable key anim encoding",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimVariableKeyLerpISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarEarlyOutMontageWhenUninitialized'' @ 1410d7c30

void __cdecl MontageCVars::_dynamic_initializer_for__CVarEarlyOutMontageWhenUninitialized__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEarlyOutMontageWhenUninitialized,L"a.Montage.EarlyOutMontageWhenUninitialized",
             &bEarlyOutMontageWhenUninitialized,
             L"Exit early when playing or stopping montage(s) if the animation instance was uninitialized while we are performing the action due to triggering montage events. Use this to avoid reading from bad memory."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEarlyOutMontageWhenUninitialized__);
  return;
}

// `dynamic_initializer_for_'CVarFlushCompletedMontagesOnPlay'' @ 1410d7c80

void __cdecl MontageCVars::_dynamic_initializer_for__CVarFlushCompletedMontagesOnPlay__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFlushCompletedMontagesOnPlay,L"a.Montage.FlushCompletedMontagesOnPlay",
             &bFlushCompletedMontagesOnPlay,
             L"Whether we should flush all completed montages IMMEDIATELY when a new montage stomps the group. Use this to prevent accumulating montages when animation tick is paused, and firing all at once when we unpause."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFlushCompletedMontagesOnPlay__);
  return;
}

// `dynamic_initializer_for_'CVarRK4SpringInterpolatorMaxIter'' @ 1410d7cd0

void __cdecl _dynamic_initializer_for__CVarRK4SpringInterpolatorMaxIter__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRK4SpringInterpolatorMaxIter,L"p.RK4SpringInterpolator.MaxIter",
             &RK4_SPRING_INTERPOLATOR_MAX_ITER,
             L"RK4 Spring Interpolator\'s max number of iterations",0);
  atexit(_dynamic_atexit_destructor_for__CVarRK4SpringInterpolatorMaxIter__);
  return;
}

// `dynamic_initializer_for_'CVarRK4SpringInterpolatorUpdateRate'' @ 1410d7d20

void __cdecl _dynamic_initializer_for__CVarRK4SpringInterpolatorUpdateRate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRK4SpringInterpolatorUpdateRate,L"p.RK4SpringInterpolator.UpdateRate",
             &RK4_SPRING_INTERPOLATOR_UPDATE_RATE,L"RK4 Spring Interpolator\'s rate of update",0);
  atexit(_dynamic_atexit_destructor_for__CVarRK4SpringInterpolatorUpdateRate__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_Animation_Graph'' @ 1410d7d70

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_Animation_Graph__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_Animation_Graph,L"Animation_Graph",(FName)0x0,(FName)0x0,(FName)0x0,
             (FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogAnimNotify'' @ 1410d7dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnimNotify__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAnimNotify,L"LogAnimNotify",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogAnimNotify__);
  return;
}

// `dynamic_initializer_for_'NAME_AnimBlueprintLog'' @ 1410d7e00

void __cdecl _dynamic_initializer_for__NAME_AnimBlueprintLog__(void)

{
  FName::FName(&NAME_AnimBlueprintLog,L"AnimBlueprintLog");
  return;
}

// `dynamic_initializer_for_'NAME_AnimGraph'' @ 1410d7e20

void __cdecl _dynamic_initializer_for__NAME_AnimGraph__(void)

{
  FName::FName(&NAME_AnimGraph,L"AnimGraph");
  return;
}

// `dynamic_initializer_for_'NAME_Evaluate'' @ 1410d7e40

void __cdecl _dynamic_initializer_for__NAME_Evaluate__(void)

{
  FName::FName(&NAME_Evaluate,L"Evaluate");
  return;
}

// `dynamic_initializer_for_'NAME_PIELog'' @ 1410d7e60

void __cdecl _dynamic_initializer_for__NAME_PIELog__(void)

{
  FName::FName(&NAME_PIELog,L"PIE");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimInstance_BlueprintBeginPlay'' @ 1410d7e80

void __cdecl _dynamic_initializer_for__NAME_UAnimInstance_BlueprintBeginPlay__(void)

{
  FName::FName(&NAME_UAnimInstance_BlueprintBeginPlay,L"BlueprintBeginPlay");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimInstance_BlueprintInitializeAnimation'' @ 1410d7ea0

void __cdecl _dynamic_initializer_for__NAME_UAnimInstance_BlueprintInitializeAnimation__(void)

{
  FName::FName(&NAME_UAnimInstance_BlueprintInitializeAnimation,L"BlueprintInitializeAnimation");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimInstance_BlueprintLinkedAnimationLayersInitialized'' @ 1410d7ec0

void __cdecl
_dynamic_initializer_for__NAME_UAnimInstance_BlueprintLinkedAnimationLayersInitialized__(void)

{
  FName::FName(&NAME_UAnimInstance_BlueprintLinkedAnimationLayersInitialized,
               L"BlueprintLinkedAnimationLayersInitialized");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimInstance_BlueprintPostEvaluateAnimation'' @ 1410d7ee0

void __cdecl _dynamic_initializer_for__NAME_UAnimInstance_BlueprintPostEvaluateAnimation__(void)

{
  FName::FName(&NAME_UAnimInstance_BlueprintPostEvaluateAnimation,L"BlueprintPostEvaluateAnimation")
  ;
  return;
}

// `dynamic_initializer_for_'NAME_UAnimInstance_BlueprintThreadSafeUpdateAnimation'' @ 1410d7f00

void __cdecl _dynamic_initializer_for__NAME_UAnimInstance_BlueprintThreadSafeUpdateAnimation__(void)

{
  FName::FName(&NAME_UAnimInstance_BlueprintThreadSafeUpdateAnimation,
               L"BlueprintThreadSafeUpdateAnimation");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimInstance_BlueprintUpdateAnimation'' @ 1410d7f20

void __cdecl _dynamic_initializer_for__NAME_UAnimInstance_BlueprintUpdateAnimation__(void)

{
  FName::FName(&NAME_UAnimInstance_BlueprintUpdateAnimation,L"BlueprintUpdateAnimation");
  return;
}

// `dynamic_initializer_for_'NAME_Update'' @ 1410d7f40

void __cdecl _dynamic_initializer_for__NAME_Update__(void)

{
  FName::FName(&NAME_Update,L"Update");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimGameThreadTime'' @ 1410d7f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimGameThreadTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimGameThreadTime == (FThreadSafeStaticStat<FStat_STAT_AnimGameThreadTime>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_AnimGameThreadTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimGameThreadTime,*pFVar1,
               L"AnimGameThreadTime","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimInitTime'' @ 1410d7ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimInitTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimInitTime == (FThreadSafeStaticStat<FStat_STAT_AnimInitTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimInitTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimInitTime,*pFVar1,L"Anim Init Time",
               "STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimStateMachineFindTransition'' @ 1410d8080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimStateMachineFindTransition__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimStateMachineFindTransition ==
      (FThreadSafeStaticStat<FStat_STAT_AnimStateMachineFindTransition>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimStateMachineFindTransition");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimStateMachineFindTransition,*pFVar1,
               L"StateMachine Find Transition","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimStateMachineUpdate'' @ 1410d8110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimStateMachineUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimStateMachineUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_AnimStateMachineUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimStateMachineUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimStateMachineUpdate,*pFVar1,
               L"StateMachine Update","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimTickTime'' @ 1410d81a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimTickTime == (FThreadSafeStaticStat<FStat_STAT_AnimTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimTickTime,*pFVar1,L"Anim Tick Time",
               "STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimTriggerAnimNotifies'' @ 1410d8230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimTriggerAnimNotifies__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimTriggerAnimNotifies ==
      (FThreadSafeStaticStat<FStat_STAT_AnimTriggerAnimNotifies>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimTriggerAnimNotifies");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimTriggerAnimNotifies,*pFVar1,
               L"Trigger Notifies","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BlendInPhysics'' @ 1410d82c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BlendInPhysics__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BlendInPhysics == (FThreadSafeStaticStat<FStat_STAT_BlendInPhysics>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BlendInPhysics");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlendInPhysics,*pFVar1,L"BlendInPhysics",
               "STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BlendPosesInGraph'' @ 1410d8350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BlendPosesInGraph__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BlendPosesInGraph == (FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BlendPosesInGraph");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlendPosesInGraph,*pFVar1,
               L"BlendPosesInGraph","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BlendPosesInGraph_WorkerThread'' @ 1410d83e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BlendPosesInGraph_WorkerThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BlendPosesInGraph_WorkerThread ==
      (FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph_WorkerThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BlendPosesInGraph_WorkerThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlendPosesInGraph_WorkerThread,*pFVar1,
               L"BlendPosesInGraph_WorkerThread","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BlueprintPostEvaluateAnimation'' @ 1410d8470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BlueprintPostEvaluateAnimation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BlueprintPostEvaluateAnimation ==
      (FThreadSafeStaticStat<FStat_STAT_BlueprintPostEvaluateAnimation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BlueprintPostEvaluateAnimation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlueprintPostEvaluateAnimation,*pFVar1,
               L"BlueprintPostEvaluateAnimation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BlueprintUpdateAnimation'' @ 1410d8500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BlueprintUpdateAnimation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BlueprintUpdateAnimation ==
      (FThreadSafeStaticStat<FStat_STAT_BlueprintUpdateAnimation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BlueprintUpdateAnimation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlueprintUpdateAnimation,*pFVar1,
               L"BlueprintUpdateAnimation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CalcSkelMeshBounds'' @ 1410d8590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CalcSkelMeshBounds__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CalcSkelMeshBounds == (FThreadSafeStaticStat<FStat_STAT_CalcSkelMeshBounds>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_CalcSkelMeshBounds");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CalcSkelMeshBounds,*pFVar1,
               L"Calc SkelMesh Bounds","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DecompressAnimationPose'' @ 1410d8620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DecompressAnimationPose__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DecompressAnimationPose ==
      (FThreadSafeStaticStat<FStat_STAT_DecompressAnimationPose>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DecompressAnimationPose");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecompressAnimationPose,*pFVar1,
               L"DecompressAnimationPose","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DecompressAnimationPose_WorkerThread'' @ 1410d86b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DecompressAnimationPose_WorkerThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DecompressAnimationPose_WorkerThread ==
      (FThreadSafeStaticStat<FStat_STAT_DecompressAnimationPose_WorkerThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DecompressAnimationPose_WorkerThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecompressAnimationPose_WorkerThread,
               *pFVar1,L"DecompressAnimationPose_WorkerThread","STATGROUP_Anim","STATCAT_Advanced",
               L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EvalRawCurveData'' @ 1410d8740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EvalRawCurveData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EvalRawCurveData == (FThreadSafeStaticStat<FStat_STAT_EvalRawCurveData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EvalRawCurveData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EvalRawCurveData,*pFVar1,
               L"EvalRawCurveData","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EvaluateAnimGraph'' @ 1410d87d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EvaluateAnimGraph__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EvaluateAnimGraph == (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimGraph>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EvaluateAnimGraph");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EvaluateAnimGraph,*pFVar1,
               L"EvaluateAnimGraph","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EvaluateAnimGraph_WorkerThread'' @ 1410d8860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EvaluateAnimGraph_WorkerThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EvaluateAnimGraph_WorkerThread ==
      (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimGraph_WorkerThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EvaluateAnimGraph_WorkerThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EvaluateAnimGraph_WorkerThread,*pFVar1,
               L"EvaluateAnimGraph_WorkerThread","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EvaluateAnimInstance'' @ 1410d88f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EvaluateAnimInstance__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EvaluateAnimInstance ==
      (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimInstance>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EvaluateAnimInstance");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EvaluateAnimInstance,*pFVar1,
               L"EvaluateAnimInstance","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EvaluateAnimInstance_WorkerThread'' @ 1410d8980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EvaluateAnimInstance_WorkerThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EvaluateAnimInstance_WorkerThread ==
      (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimInstance_WorkerThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EvaluateAnimInstance_WorkerThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EvaluateAnimInstance_WorkerThread,*pFVar1,
               L"EvaluateAnimInstance_WorkerThread","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EvaluateAnimStateMachine'' @ 1410d8a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EvaluateAnimStateMachine__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EvaluateAnimStateMachine ==
      (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimStateMachine>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EvaluateAnimStateMachine");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EvaluateAnimStateMachine,*pFVar1,
               L"EvaluateAnimStateMachine","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EvaluateAnimStateMachine_WorkerThread'' @ 1410d8aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EvaluateAnimStateMachine_WorkerThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EvaluateAnimStateMachine_WorkerThread ==
      (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimStateMachine_WorkerThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EvaluateAnimStateMachine_WorkerThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EvaluateAnimStateMachine_WorkerThread,
               *pFVar1,L"EvaluateAnimStateMachine_WorkerThread","STATGROUP_Anim","STATCAT_Advanced",
               L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FillComponentSpaceTransforms'' @ 1410d8b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FillComponentSpaceTransforms__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FillComponentSpaceTransforms ==
      (FThreadSafeStaticStat<FStat_STAT_FillComponentSpaceTransforms>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FillComponentSpaceTransforms");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FillComponentSpaceTransforms,*pFVar1,
               L"FillComponentSpaceTransforms","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FillComponentSpaceTransforms_WorkerThread'' @ 1410d8bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FillComponentSpaceTransforms_WorkerThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FillComponentSpaceTransforms_WorkerThread ==
      (FThreadSafeStaticStat<FStat_STAT_FillComponentSpaceTransforms_WorkerThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FillComponentSpaceTransforms_WorkerThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FillComponentSpaceTransforms_WorkerThread,
               *pFVar1,L"FillComponentSpaceTransforms_WorkerThread","STATGROUP_Anim",
               "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FinalizeAnimationUpdate'' @ 1410d8c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FinalizeAnimationUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FinalizeAnimationUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_FinalizeAnimationUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FinalizeAnimationUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FinalizeAnimationUpdate,*pFVar1,
               L"FinalizeAnimationUpdate","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GetAnimationPose'' @ 1410d8ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GetAnimationPose__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GetAnimationPose == (FThreadSafeStaticStat<FStat_STAT_GetAnimationPose>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GetAnimationPose");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GetAnimationPose,*pFVar1,
               L"Anim Decompression","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InterpolateSkippedFrames'' @ 1410d8d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InterpolateSkippedFrames__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InterpolateSkippedFrames ==
      (FThreadSafeStaticStat<FStat_STAT_InterpolateSkippedFrames>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InterpolateSkippedFrames");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InterpolateSkippedFrames,*pFVar1,
               L"InterpolateSkippedFrames","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MeshObjectUpdate'' @ 1410d8e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MeshObjectUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MeshObjectUpdate == (FThreadSafeStaticStat<FStat_STAT_MeshObjectUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MeshObjectUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MeshObjectUpdate,*pFVar1,
               L"MeshObject Update","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Montage_Advance'' @ 1410d8e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Montage_Advance__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Montage_Advance == (FThreadSafeStaticStat<FStat_STAT_Montage_Advance>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Montage_Advance");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Montage_Advance,*pFVar1,L"MontageAdvance",
               "STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Montage_UpdateWeight'' @ 1410d8f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Montage_UpdateWeight__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Montage_UpdateWeight ==
      (FThreadSafeStaticStat<FStat_STAT_Montage_UpdateWeight>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Montage_UpdateWeight");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Montage_UpdateWeight,*pFVar1,
               L"MontageUpdateWeight","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NativeThreadSafeUpdateAnimation'' @ 1410d8fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NativeThreadSafeUpdateAnimation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NativeThreadSafeUpdateAnimation ==
      (FThreadSafeStaticStat<FStat_STAT_NativeThreadSafeUpdateAnimation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NativeThreadSafeUpdateAnimation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NativeThreadSafeUpdateAnimation,*pFVar1,
               L"NativeThreadSafeUpdateAnimation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NativeUpdateAnimation'' @ 1410d9040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NativeUpdateAnimation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NativeUpdateAnimation ==
      (FThreadSafeStaticStat<FStat_STAT_NativeUpdateAnimation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NativeUpdateAnimation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NativeUpdateAnimation,*pFVar1,
               L"NativeUpdateAnimation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PerformAnimEvaluation'' @ 1410d90d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PerformAnimEvaluation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PerformAnimEvaluation ==
      (FThreadSafeStaticStat<FStat_STAT_PerformAnimEvaluation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PerformAnimEvaluation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PerformAnimEvaluation,*pFVar1,
               L"PerformAnimEvaluation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PerformAnimEvaluation_WorkerThread'' @ 1410d9160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PerformAnimEvaluation_WorkerThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PerformAnimEvaluation_WorkerThread ==
      (FThreadSafeStaticStat<FStat_STAT_PerformAnimEvaluation_WorkerThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PerformAnimEvaluation_WorkerThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PerformAnimEvaluation_WorkerThread,*pFVar1
               ,L"PerformAnimEvaluation_WorkerThread","STATGROUP_Anim","STATCAT_Advanced",L"Anim",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PoseAssetGetAnimationPose'' @ 1410d91f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PoseAssetGetAnimationPose__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PoseAssetGetAnimationPose ==
      (FThreadSafeStaticStat<FStat_STAT_PoseAssetGetAnimationPose>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PoseAssetGetAnimationPose");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseAssetGetAnimationPose,*pFVar1,
               L"PoseAssetGetAnimationPose","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PoseAssetGetAnimationPose_WorkerThread'' @ 1410d9280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PoseAssetGetAnimationPose_WorkerThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PoseAssetGetAnimationPose_WorkerThread ==
      (FThreadSafeStaticStat<FStat_STAT_PoseAssetGetAnimationPose_WorkerThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PoseAssetGetAnimationPose_WorkerThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseAssetGetAnimationPose_WorkerThread,
               *pFVar1,L"PoseAssetGetAnimationPose_WorkerThread","STATGROUP_Anim","STATCAT_Advanced"
               ,L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PoseBlendNodeEvaluate'' @ 1410d9310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PoseBlendNodeEvaluate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PoseBlendNodeEvaluate ==
      (FThreadSafeStaticStat<FStat_STAT_PoseBlendNodeEvaluate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PoseBlendNodeEvaluate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseBlendNodeEvaluate,*pFVar1,
               L"PoseBlendNodeEvaluate","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PoseBlendNodeEvaluate_WorkerThread'' @ 1410d93a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PoseBlendNodeEvaluate_WorkerThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PoseBlendNodeEvaluate_WorkerThread ==
      (FThreadSafeStaticStat<FStat_STAT_PoseBlendNodeEvaluate_WorkerThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PoseBlendNodeEvaluate_WorkerThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseBlendNodeEvaluate_WorkerThread,*pFVar1
               ,L"PoseBlendNodeEvaluate_WorkerThread","STATGROUP_Anim","STATCAT_Advanced",L"Anim",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PostUpdateAnimation'' @ 1410d9430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PostUpdateAnimation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PostUpdateAnimation == (FThreadSafeStaticStat<FStat_STAT_PostUpdateAnimation>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_PostUpdateAnimation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostUpdateAnimation,*pFVar1,
               L"PostUpdateAnimation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PreUpdateAnimation'' @ 1410d94c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PreUpdateAnimation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PreUpdateAnimation == (FThreadSafeStaticStat<FStat_STAT_PreUpdateAnimation>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_PreUpdateAnimation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreUpdateAnimation,*pFVar1,
               L"PreUpdateAnimation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProxyUpdateAnimation'' @ 1410d9550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProxyUpdateAnimation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProxyUpdateAnimation ==
      (FThreadSafeStaticStat<FStat_STAT_ProxyUpdateAnimation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProxyUpdateAnimation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyUpdateAnimation,*pFVar1,
               L"ProxyUpdateAnimation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProxyUpdateAnimation_WorkerThread'' @ 1410d95e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProxyUpdateAnimation_WorkerThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProxyUpdateAnimation_WorkerThread ==
      (FThreadSafeStaticStat<FStat_STAT_ProxyUpdateAnimation_WorkerThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProxyUpdateAnimation_WorkerThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyUpdateAnimation_WorkerThread,*pFVar1,
               L"ProxyUpdateAnimation_WorkerThread","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RefreshBoneTransforms'' @ 1410d9670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RefreshBoneTransforms__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RefreshBoneTransforms ==
      (FThreadSafeStaticStat<FStat_STAT_RefreshBoneTransforms>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RefreshBoneTransforms");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RefreshBoneTransforms,*pFVar1,
               L"RefreshBoneTransforms","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SkelCompUpdateTransform'' @ 1410d9700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SkelCompUpdateTransform__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SkelCompUpdateTransform ==
      (FThreadSafeStaticStat<FStat_STAT_SkelCompUpdateTransform>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SkelCompUpdateTransform");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkelCompUpdateTransform,*pFVar1,
               L"SkelComp UpdateTransform","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SkeletalComponentAnimEvaluate'' @ 1410d9790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SkeletalComponentAnimEvaluate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SkeletalComponentAnimEvaluate ==
      (FThreadSafeStaticStat<FStat_STAT_SkeletalComponentAnimEvaluate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SkeletalComponentAnimEvaluate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalComponentAnimEvaluate,*pFVar1,
               L"SkeletalComponentAnimEvaluate","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SkeletalComponentAnimEvaluate_WorkerThread'' @ 1410d9820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_SkeletalComponentAnimEvaluate_WorkerThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SkeletalComponentAnimEvaluate_WorkerThread ==
      (FThreadSafeStaticStat<FStat_STAT_SkeletalComponentAnimEvaluate_WorkerThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SkeletalComponentAnimEvaluate_WorkerThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalComponentAnimEvaluate_WorkerThread
               ,*pFVar1,L"SkeletalComponentAnimEvaluate_WorkerThread","STATGROUP_Anim",
               "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SkinPerPolyVertices'' @ 1410d98b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SkinPerPolyVertices__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SkinPerPolyVertices == (FThreadSafeStaticStat<FStat_STAT_SkinPerPolyVertices>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_SkinPerPolyVertices");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkinPerPolyVertices,*pFVar1,
               L"SkinPerPolyVertices);","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SkinnedMeshCompTick'' @ 1410d9940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SkinnedMeshCompTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SkinnedMeshCompTick == (FThreadSafeStaticStat<FStat_STAT_SkinnedMeshCompTick>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_SkinnedMeshCompTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkinnedMeshCompTick,*pFVar1,
               L"SkinnedMeshComp Tick","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TickAssetPlayerInstance'' @ 1410d99d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TickAssetPlayerInstance__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TickAssetPlayerInstance ==
      (FThreadSafeStaticStat<FStat_STAT_TickAssetPlayerInstance>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TickAssetPlayerInstance");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickAssetPlayerInstance,*pFVar1,
               L"TickAssetPlayerInstance","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TickAssetPlayerInstances'' @ 1410d9a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TickAssetPlayerInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TickAssetPlayerInstances ==
      (FThreadSafeStaticStat<FStat_STAT_TickAssetPlayerInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TickAssetPlayerInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickAssetPlayerInstances,*pFVar1,
               L"TickAssetPlayerInstances","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TickUpdateRate'' @ 1410d9af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TickUpdateRate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TickUpdateRate == (FThreadSafeStaticStat<FStat_STAT_TickUpdateRate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TickUpdateRate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickUpdateRate,*pFVar1,L"TickUpdateRate",
               "STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateAnimation'' @ 1410d9b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateAnimation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateAnimation == (FThreadSafeStaticStat<FStat_STAT_UpdateAnimation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateAnimation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateAnimation,*pFVar1,L"UpdateAnimation"
               ,"STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateCurves'' @ 1410d9c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateCurves__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateCurves == (FThreadSafeStaticStat<FStat_STAT_UpdateCurves>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateCurves");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateCurves,*pFVar1,L"UpdateCurves",
               "STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateCurvesPostEvaluation'' @ 1410d9ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateCurvesPostEvaluation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateCurvesPostEvaluation ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateCurvesPostEvaluation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateCurvesPostEvaluation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateCurvesPostEvaluation,*pFVar1,
               L"UpdateCurvesPostEvaluation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateCurvesToEvaluationContext'' @ 1410d9d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateCurvesToEvaluationContext__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateCurvesToEvaluationContext ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateCurvesToEvaluationContext>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateCurvesToEvaluationContext");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateCurvesToEvaluationContext,*pFVar1,
               L"UpdateCurvesToEvaluationContext","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateRBBones'' @ 1410d9dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateRBBones__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateRBBones == (FThreadSafeStaticStat<FStat_STAT_UpdateRBBones>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateRBBones");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateRBBones,*pFVar1,
               L"UpdateKinematicBonesToAnim","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateRBJoints'' @ 1410d9e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateRBJoints__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateRBJoints == (FThreadSafeStaticStat<FStat_STAT_UpdateRBJoints>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateRBJoints");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateRBJoints,*pFVar1,
               L"UpdateRBJointsMotors","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateTriMeshVertices'' @ 1410d9ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateTriMeshVertices__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateTriMeshVertices ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateTriMeshVertices>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateTriMeshVertices");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateTriMeshVertices,*pFVar1,
               L"UpdateTriMeshVertices","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h__Script_Engine_3695736014'' @ 1410d9f70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h__Script_Engine_3695736014__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h__Script_Engine_3531431749'' @ 1410d9fb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h__Script_Engine_3531431749__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h__Script_Engine_2837004714'' @ 1410d9ff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h__Script_Engine_2837004714__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveEverySecondKey_h__Script_Engine_1835866967'' @ 1410da030

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveEverySecondKey_h__Script_Engine_1835866967__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveEverySecondKey_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveLinearKeys_h__Script_Engine_3580153360'' @ 1410da070

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveLinearKeys_h__Script_Engine_3580153360__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveLinearKeys_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h__Script_Engine_2110869128'' @ 1410da0b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h__Script_Engine_2110869128__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_CompressedRichCurve_h__Script_Engine_4290751276'' @ 1410da0f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_CompressedRichCurve_h__Script_Engine_4290751276__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_CompressedRichCurve_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformIndexable_h__Script_Engine_2456994792'' @ 1410da130

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformIndexable_h__Script_Engine_2456994792__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformIndexable_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformlySampled_h__Script_Engine_2573776720'' @ 1410da170

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformlySampled_h__Script_Engine_2573776720__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformlySampled_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h__Script_Engine_3575588289'' @ 1410da1b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h__Script_Engine_3575588289__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h__Script_Engine_3990128435'' @ 1410da1f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h__Script_Engine_3990128435__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h__Script_Engine_3179030947'' @ 1410da230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h__Script_Engine_3179030947__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h__Script_Engine_652846668'' @ 1410da270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h__Script_Engine_652846668__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h__Script_Engine_1439636648'' @ 1410da2b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h__Script_Engine_1439636648__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h__Script_Engine_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h__Script_Engine_1483867643'' @ 1410da300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h__Script_Engine_1483867643__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h__Script_Engine_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h__Script_Engine_3870964407'' @ 1410da350

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h__Script_Engine_3870964407__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h__Script_Engine_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h__Script_Engine_2304329591'' @ 1410da3a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h__Script_Engine_2304329591__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h__Script_Engine_Statics
             ::ScriptStructInfo,7,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h__Script_Engine_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h__Script_Engine_2688441721'' @ 1410da3f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h__Script_Engine_2688441721__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Animation'' @ 1410da440

void __cdecl _dynamic_initializer_for___GCsvCategory_Animation__(void)

{
  FString::operator=(&_GCsvCategory_Animation.Name,L"Animation");
  _GCsvCategory_Animation.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_Animation.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Animation__);
  return;
}

// Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing @ 14741e1d0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton @ 14741e210

UFunction * __cdecl
Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys @ 14741e250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys(void)

{
  if (Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.OuterSingleton,
               &Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.OuterSingleton;
}

// Z_Construct_UFunction_UAnimationDataController_GetModelInterface @ 14741e290

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_GetModelInterface(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_GetModelInterface_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage @ 14741e2d0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741e310

void __cdecl
Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack @ 14741e3e0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741e420

void __cdecl
Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UClass_UAnimCurveCompressionCodec_NoRegister @ 14741e430

UClass * __cdecl Z_Construct_UClass_UAnimCurveCompressionCodec_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionCodec",
               &Z_Registration_Info_UClass_UAnimCurveCompressionCodec.InnerSingleton,
               UAnimCurveCompressionCodec::StaticRegisterNativesUAnimCurveCompressionCodec,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCurveCompressionCodec>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec.InnerSingleton;
}

// Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs @ 14741e4e0

UFunction * __cdecl
Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_OpenBracket @ 14741e5d0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_OpenBracket(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled @ 14741e610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled(void)

{
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.
                OuterSingleton,
               &Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.OuterSingleton;
}

// NewProp_bShouldTransact_SetBit @ 14741e650

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes @ 14741e660

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings @ 14741e6a0

UFunction * __cdecl
Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741e6e0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14741e6f0

void __cdecl
Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone @ 14741e700

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent @ 14741e740

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741e780

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks @ 14741e790

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14741e7d0

void __cdecl
Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bShouldTransact_SetBit @ 14741e830

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent @ 14741e840

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType @ 14741e8c0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot @ 14741e900

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741e940

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14741e950

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_RemoveAttribute @ 14741ea40

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_RemoveAttribute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization @ 14741ea80

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741eb50

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14741eb60

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x45) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14741eb70

void __cdecl
Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// Z_Construct_UClass_UAnimCurveCompressionSettings @ 14741eb80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimCurveCompressionSettings(void)

{
  if (Z_Registration_Info_UClass_UAnimCurveCompressionSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimCurveCompressionSettings.OuterSingleton,
               &Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionSettings.OuterSingleton;
}

// Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey @ 14741ebc0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent @ 14741ec00

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741ec40

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14741ec50

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack @ 14741eca0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_ResetDynamics @ 14741ece0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_ResetDynamics(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741ed20

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14741ed30

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot @ 14741ed60

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_RemoveCurve @ 14741ee00

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_RemoveCurve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741f100

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_SetMorphTarget @ 14741f110

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_SetMorphTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14741f150

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bSet_SetBit @ 14741f160

void __cdecl
Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::
NewProp_bSet_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey @ 14741f170

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances @ 14741f1b0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741f1f0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bSet_SetBit @ 14741f200

void __cdecl
Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::
NewProp_bSet_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14741f210

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances @ 14741f260

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey @ 14741f2a0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_SetRootMotionMode @ 14741f2e0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_SetRootMotionMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741f320

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14741f330

void __cdecl
Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bSet_SetBit @ 14741f340

void __cdecl
Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics::
NewProp_bSet_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_RenameCurve @ 14741f350

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_RenameCurve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData @ 14741f390

UFunction * __cdecl
Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741f3d0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_Resize_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_SnapshotPose @ 14741f3e0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_SnapshotPose(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_Resize @ 14741f420

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_Resize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_Resize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741f460

void __cdecl
Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_StopSlotAnimation @ 14741f470

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_StopSlotAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_ResizeInFrames @ 14741f4b0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_ResizeInFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner @ 14741f4f0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741f570

void __cdecl
Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers @ 14741f580

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames @ 14741f5c0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUnlockMovement_SetBit @ 14741f670

void __cdecl
Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_bUnlockMovement_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_UnlockAILogic_SetBit @ 14741f6f0

void __cdecl
Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_UnlockAILogic_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bShouldTransact_SetBit @ 14741f7c0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_UnlockAIResources @ 14741f7d0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_UnlockAIResources(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Engine_EAnimAssetCurveFlags @ 14741f880

UEnum * __cdecl Z_Construct_UEnum_Engine_EAnimAssetCurveFlags(void)

{
  if (Z_Registration_Info_UEnum_EAnimAssetCurveFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAnimAssetCurveFlags.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAnimAssetCurveFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAnimAssetCurveFlags.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EAnimCurveType @ 14741f8c0

UEnum * __cdecl Z_Construct_UEnum_Engine_EAnimCurveType(void)

{
  if (Z_Registration_Info_UEnum_EAnimCurveType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAnimCurveType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAnimCurveType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAnimCurveType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ERawCurveTrackTypes @ 14741f900

UEnum * __cdecl Z_Construct_UEnum_Engine_ERawCurveTrackTypes(void)

{
  if (Z_Registration_Info_UEnum_ERawCurveTrackTypes.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERawCurveTrackTypes.InnerSingleton,
               &Z_Construct_UEnum_Engine_ERawCurveTrackTypes_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERawCurveTrackTypes.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimCurveBase @ 14741f940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimCurveBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimCurveBase.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimCurveBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimCurveBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimCurveBase.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimCurveBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFloatCurve @ 14741f9c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFloatCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFloatCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFloatCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FFloatCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFloatCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFloatCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTransformCurve @ 14741fa40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransformCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransformCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransformCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FTransformCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransformCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTransformCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVectorCurve @ 14741fac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVectorCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVectorCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVectorCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FVectorCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVectorCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVectorCurve.InnerSingleton;
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

// NewProp_ReturnValue_SetBit @ 14741fb40

void __cdecl
Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_ResizePlayLength @ 14741fb50

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_ResizePlayLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// EAnimCurveType_StaticEnum @ 14741fb90

UEnum * __cdecl EAnimCurveType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimCurveType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimCurveType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimCurveType,(UObject *)pUVar1,L"EAnimCurveType");
  }
  return Z_Registration_Info_UEnum_EAnimCurveType.OuterSingleton;
}

// Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState @ 14741fbd0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 14741fc10

void __cdecl
Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14741fc20

void __cdecl
Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// EAnimAssetCurveFlags_StaticEnum @ 14741fc30

UEnum * __cdecl EAnimAssetCurveFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimAssetCurveFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimAssetCurveFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimAssetCurveFlags,(UObject *)pUVar1,
                       L"EAnimAssetCurveFlags");
  }
  return Z_Registration_Info_UEnum_EAnimAssetCurveFlags.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14741fc70

void __cdecl
Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_ScaleCurve @ 14741fcc0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_ScaleCurve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState @ 14741fd00

UFunction * __cdecl
Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14741fd40

void * __cdecl Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimCurveParam,&UE::CoreUObject::Private::Construct<FAnimCurveParam>,&UE::CoreUObject::Private::ConstructForTests<FAnimCurveParam>,&UE::CoreUObject::Private::Destruct<FAnimCurveParam>,&UE::CoreUObject::Private::Copy<FAnimCurveParam>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14741fdc0

void __cdecl
Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bShouldTransact_SetBit @ 14741fdd0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14741fde0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine @ 14741fe30

UFunction * __cdecl
Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys @ 14741feb0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14741fef0

void __cdecl
Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bShouldTransact_SetBit @ 14741ff00

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14741ff10

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState @ 14741ff20

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14741ff60

void * __cdecl Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimCurveBase,&UE::CoreUObject::Private::Construct<FAnimCurveBase>,&UE::CoreUObject::Private::ConstructForTests<FAnimCurveBase>,&UE::CoreUObject::Private::Destruct<FAnimCurveBase>,&UE::CoreUObject::Private::SerializeArchive<FAnimCurveBase>,&UE::CoreUObject::Private::PostSerialize<FAnimCurveBase>,&UE::CoreUObject::Private::Copy<FAnimCurveBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimationDataController_SetCurveColor @ 14741ffa0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_SetCurveColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14741ffe0

void __cdecl
Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UClass_UAnimInstance @ 14741fff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimInstance(void)

{
  if (Z_Registration_Info_UClass_UAnimInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimInstance.OuterSingleton,
               &Z_Construct_UClass_UAnimInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimInstance.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EMontagePlayReturnType @ 147420030

UEnum * __cdecl Z_Construct_UEnum_Engine_EMontagePlayReturnType(void)

{
  if (Z_Registration_Info_UEnum_EMontagePlayReturnType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMontagePlayReturnType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMontagePlayReturnType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMontagePlayReturnType.InnerSingleton;
}

// Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature @ 147420070

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnMontageBlendedInEndedMCDelegate__DelegateSignature @ 1474200b0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnMontageBlendedInEndedMCDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnMontageBlendedInEndedMCDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature @ 1474200f0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature @ 147420130

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnMontageSectionChangedMCDelegate__DelegateSignature @ 147420170

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnMontageSectionChangedMCDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnMontageSectionChangedMCDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature @ 1474201b0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FA2Pose @ 1474201f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FA2Pose(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FA2Pose.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FA2Pose.InnerSingleton,
               &Z_Construct_UScriptStruct_FA2Pose_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FA2Pose.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FA2Pose.InnerSingleton;
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

// NewStructOps @ 147420270

void * __cdecl Z_Construct_UScriptStruct_FFloatCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFloatCurve,&UE::CoreUObject::Private::Construct<FFloatCurve>,&UE::CoreUObject::Private::ConstructForTests<FFloatCurve>,&UE::CoreUObject::Private::Destruct<FFloatCurve>,&UE::CoreUObject::Private::SerializeArchive<FFloatCurve>,&UE::CoreUObject::Private::PostSerialize<FFloatCurve>,&UE::CoreUObject::Private::Copy<FFloatCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EMontagePlayReturnType_StaticEnum @ 1474202b0

UEnum * __cdecl EMontagePlayReturnType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMontagePlayReturnType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMontagePlayReturnType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMontagePlayReturnType,(UObject *)pUVar1,
                       L"EMontagePlayReturnType");
  }
  return Z_Registration_Info_UEnum_EMontagePlayReturnType.OuterSingleton;
}

// NewProp_bShouldTransact_SetBit @ 1474202f0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState @ 147420300

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147420340

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147420350

void __cdecl
Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_SetCurveComment @ 147420360

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_SetCurveComment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine @ 1474203a0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1474203e0

void * __cdecl Z_Construct_UScriptStruct_FVectorCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 400;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVectorCurve,&UE::CoreUObject::Private::Construct<FVectorCurve>,&UE::CoreUObject::Private::ConstructForTests<FVectorCurve>,&UE::CoreUObject::Private::Destruct<FVectorCurve>,&UE::CoreUObject::Private::SerializeArchive<FVectorCurve>,&UE::CoreUObject::Private::PostSerialize<FVectorCurve>,&UE::CoreUObject::Private::Copy<FVectorCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInterrupted_SetBit @ 1474204a0

void __cdecl
Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::
NewProp_bInterrupted_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bState_SetBit @ 1474204b0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_bState_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_bShouldTransact_SetBit @ 1474204c0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 1474204e0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 1474204f0

void __cdecl
Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 147420550

void * __cdecl Z_Construct_UScriptStruct_FTransformCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x4c0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransformCurve,&UE::CoreUObject::Private::Construct<FTransformCurve>,&UE::CoreUObject::Private::ConstructForTests<FTransformCurve>,&UE::CoreUObject::Private::Destruct<FTransformCurve>,&UE::CoreUObject::Private::SerializeArchive<FTransformCurve>,&UE::CoreUObject::Private::PostSerialize<FTransformCurve>,&UE::CoreUObject::Private::Copy<FTransformCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState @ 1474205a0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_SetCurveFlag @ 1474205e0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_SetCurveFlag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInterrupted_SetBit @ 147420650

void __cdecl
Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics
::NewProp_bInterrupted_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147420700

void __cdecl
Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bShouldTransact_SetBit @ 147420710

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147420720

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState @ 147420730

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147420770

void * __cdecl Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCachedFloatCurve,&UE::CoreUObject::Private::Construct<FCachedFloatCurve>,&UE::CoreUObject::Private::ConstructForTests<FCachedFloatCurve>,&UE::CoreUObject::Private::Destruct<FCachedFloatCurve>,&UE::CoreUObject::Private::Copy<FCachedFloatCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimationDataController_SetCurveFlags @ 1474207b0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_SetCurveFlags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1474207f0

void __cdecl
Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bShouldTransact_SetBit @ 147420800

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147420810

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine @ 147420820

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLooped_SetBit @ 147420860

void __cdecl
Z_Construct_UDelegateFunction_Engine_OnMontageSectionChangedMCDelegate__DelegateSignature_Statics::
NewProp_bLooped_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_SetCurveKey @ 147420870

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_SetCurveKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseMultiThreadedAnimationUpdate_SetBit @ 1474208b0

void __cdecl
Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 1;
  return;
}

// ERawCurveTrackTypes_StaticEnum @ 1474208c0

UEnum * __cdecl ERawCurveTrackTypes_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERawCurveTrackTypes.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERawCurveTrackTypes.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERawCurveTrackTypes,(UObject *)pUVar1,
                       L"ERawCurveTrackTypes");
  }
  return Z_Registration_Info_UEnum_ERawCurveTrackTypes.OuterSingleton;
}

// NewProp_bUsingCopyPoseFromMesh_SetBit @ 147420900

void __cdecl
Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 2;
  return;
}

// NewProp_bReceiveNotifiesFromLinkedInstances_SetBit @ 147420910

void __cdecl
Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 0x10;
  return;
}

// NewProp_bPropagateNotifiesToLinkedInstances_SetBit @ 147420920

void __cdecl
Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 0x20;
  return;
}

// NewProp_bUseMainInstanceMontageEvaluationData_SetBit @ 147420930

void __cdecl
Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMainInstanceMontageEvaluationData_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 0x40;
  return;
}

// NewProp_bQueueMontageEvents_SetBit @ 147420940

void __cdecl
Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x33) = *(byte *)((longlong)param_1 + 0x33) | 1;
  return;
}

// NewProp_bShouldTransact_SetBit @ 147420950

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147420960

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewStructOps @ 147420970

void * __cdecl Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRawCurveTracks,&UE::CoreUObject::Private::Construct<FRawCurveTracks>,&UE::CoreUObject::Private::ConstructForTests<FRawCurveTracks>,&UE::CoreUObject::Private::Destruct<FRawCurveTracks>,&UE::CoreUObject::Private::Copy<FRawCurveTracks>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FAnimExecutionContext @ 1474209b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimExecutionContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimExecutionContext.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimExecutionContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimExecutionContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimExecutionContext.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FAnimExecutionContext.InnerSingleton;
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

// EAnimExecutionContextConversionResult_StaticEnum @ 147420a30

UEnum * __cdecl EAnimExecutionContextConversionResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult,
                       (UObject *)pUVar1,L"EAnimExecutionContextConversionResult");
  }
  return Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.OuterSingleton;
}

// Z_Construct_UFunction_UAnimationDataController_SetCurveKeys @ 147420a70

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_SetCurveKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147420ab0

void * __cdecl Z_Construct_UScriptStruct_FAnimExecutionContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimExecutionContext,&UE::CoreUObject::Private::Construct<FAnimExecutionContext>,&UE::CoreUObject::Private::ConstructForTests<FAnimExecutionContext>,&UE::CoreUObject::Private::Destruct<FAnimExecutionContext>,&UE::CoreUObject::Private::Copy<FAnimExecutionContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147420af0

void * __cdecl Z_Construct_UScriptStruct_FA2Pose_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FA2Pose,&UE::CoreUObject::Private::Construct<FA2Pose>,&UE::CoreUObject::Private::ConstructForTests<FA2Pose>,&UE::CoreUObject::Private::Destruct<FA2Pose>,&UE::CoreUObject::Private::Copy<FA2Pose>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bShouldTransact_SetBit @ 147420b30

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_SetFrameRate @ 147420b40

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_SetFrameRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147420b80

void * __cdecl Z_Construct_UScriptStruct_FAnimInitializationContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimInitializationContext,&UE::CoreUObject::Private::Construct<FAnimInitializationContext>,&UE::CoreUObject::Private::ConstructForTests<FAnimInitializationContext>,&UE::CoreUObject::Private::Destruct<FAnimInitializationContext>,&UE::CoreUObject::Private::Copy<FAnimInitializationContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimationDataController_SetModel @ 147420bc0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_SetModel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_SetModel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147420c00

void * __cdecl Z_Construct_UScriptStruct_FA2CSPose_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FA2CSPose,&UE::CoreUObject::Private::Construct<FA2CSPose>,&UE::CoreUObject::Private::ConstructForTests<FA2CSPose>,&UE::CoreUObject::Private::Destruct<FA2CSPose>,&UE::CoreUObject::Private::Copy<FA2CSPose>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bShouldTransact_SetBit @ 147420c60

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames @ 147420cf0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 147420e10

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_SetPlayLength @ 147420e20

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_SetPlayLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147420ea0

void * __cdecl Z_Construct_UScriptStruct_FAnimUpdateContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimUpdateContext,&UE::CoreUObject::Private::Construct<FAnimUpdateContext>,&UE::CoreUObject::Private::ConstructForTests<FAnimUpdateContext>,&UE::CoreUObject::Private::Destruct<FAnimUpdateContext>,&UE::CoreUObject::Private::Copy<FAnimUpdateContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bShouldTransact_SetBit @ 147420f20

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147420f30

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_Blueprint_GetMainAnimInstance @ 147421030

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Blueprint_GetMainAnimInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Blueprint_GetMainAnimInstance_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey @ 147421070

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_Blueprint_GetSlotMontageLocalWeight @ 1474210f0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Blueprint_GetSlotMontageLocalWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Blueprint_GetSlotMontageLocalWeight_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 147421170

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 147421180

void * __cdecl Z_Construct_UScriptStruct_FAnimPoseContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimPoseContext,&UE::CoreUObject::Private::Construct<FAnimPoseContext>,&UE::CoreUObject::Private::ConstructForTests<FAnimPoseContext>,&UE::CoreUObject::Private::Destruct<FAnimPoseContext>,&UE::CoreUObject::Private::Copy<FAnimPoseContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 1474211c0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay @ 1474211d0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys @ 147421210

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EDrawDebugItemType_StaticEnum @ 147421250

UEnum * __cdecl EDrawDebugItemType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDrawDebugItemType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDrawDebugItemType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDrawDebugItemType,(UObject *)pUVar1,
                       L"EDrawDebugItemType");
  }
  return Z_Registration_Info_UEnum_EDrawDebugItemType.OuterSingleton;
}

// NewProp_bShouldTransact_SetBit @ 147421290

void __cdecl
Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation @ 1474212a0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewStructOps @ 1474212e0

void * __cdecl Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimComponentSpacePoseContext,&UE::CoreUObject::Private::Construct<FAnimComponentSpacePoseContext>,&UE::CoreUObject::Private::ConstructForTests<FAnimComponentSpacePoseContext>,&UE::CoreUObject::Private::Destruct<FAnimComponentSpacePoseContext>,&UE::CoreUObject::Private::Copy<FAnimComponentSpacePoseContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147421320

void * __cdecl Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x810;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimInstanceProxy,&UE::CoreUObject::Private::Construct<FAnimInstanceProxy>,&UE::CoreUObject::Private::ConstructForTests<FAnimInstanceProxy>,&UE::CoreUObject::Private::Destruct<FAnimInstanceProxy>,&UE::CoreUObject::Private::Copy<FAnimInstanceProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton @ 147421360

UFunction * __cdecl
Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized @ 1474213a0

UFunction * __cdecl
Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation @ 147421430

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation @ 147421510

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation @ 147421590

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_CalculateDirection @ 147421760

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_CalculateDirection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_ClearAllTransitionEvents @ 1474217a0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_ClearAllTransitionEvents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_ClearAllTransitionEvents_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_ClearMorphTargets @ 1474217e0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_ClearMorphTargets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_ClearMorphTargets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimCurveCompressionCodec @ 147421820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimCurveCompressionCodec(void)

{
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimCurveCompressionCodec.OuterSingleton,
               &Z_Construct_UClass_UAnimCurveCompressionCodec_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec.OuterSingleton;
}

// Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents @ 147421860

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1474218a0

void __cdecl
Z_Construct_UFunction_UAnimInstance_DynamicMontage_IsPlayingFrom_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_DynamicMontage_IsPlayingFrom @ 1474218b0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_DynamicMontage_IsPlayingFrom(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_DynamicMontage_IsPlayingFrom_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames @ 147421a70

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly @ 147421ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly(void)

{
  if (Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.OuterSingleton,
               &Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.OuterSingleton;
}

// Z_Construct_UFunction_UAnimInstance_GetAllCurveNames @ 147421be0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetAllCurveNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetBlendProfileByName @ 147421c20

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetBlendProfileByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetBlendProfileByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage @ 147421c60

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimationDataModel @ 147421d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimationDataModel(void)

{
  if (Z_Registration_Info_UClass_UAnimationDataModel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimationDataModel.OuterSingleton,
               &Z_Construct_UClass_UAnimationDataModel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimationDataModel.OuterSingleton;
}

// NewStructOps @ 147421da0

void * __cdecl Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBoneAnimationTrack,&UE::CoreUObject::Private::Construct<FBoneAnimationTrack>,&UE::CoreUObject::Private::ConstructForTests<FBoneAnimationTrack>,&UE::CoreUObject::Private::Destruct<FBoneAnimationTrack>,&UE::CoreUObject::Private::Copy<FBoneAnimationTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimInstance_GetCurrentStateName @ 147421de0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetCurrentStateName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimCompress_LeastDestructive @ 147421e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimCompress_LeastDestructive(void)

{
  if (Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.OuterSingleton,
               &Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.OuterSingleton;
}

// Z_Construct_UFunction_UAnimInstance_GetCurveValue @ 147421e60

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetCurveValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147421ea0

void __cdecl
Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 147421eb0

void * __cdecl Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationCurveData,&UE::CoreUObject::Private::Construct<FAnimationCurveData>,&UE::CoreUObject::Private::ConstructForTests<FAnimationCurveData>,&UE::CoreUObject::Private::Destruct<FAnimationCurveData>,&UE::CoreUObject::Private::Copy<FAnimationCurveData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault @ 147421ef0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds @ 147421f30

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147421f80

void * __cdecl Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimatedBoneAttribute,&UE::CoreUObject::Private::Construct<FAnimatedBoneAttribute>,&UE::CoreUObject::Private::ConstructForTests<FAnimatedBoneAttribute>,&UE::CoreUObject::Private::Destruct<FAnimatedBoneAttribute>,&UE::CoreUObject::Private::Copy<FAnimatedBoneAttribute>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength @ 147422090

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime @ 1474221a0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction @ 1474222a0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence @ 1474222e0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd @ 147422320

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks @ 147422360

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction @ 1474223a0

UFunction * __cdecl
Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime @ 1474223e0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex @ 147422420

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight @ 147422460

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight @ 1474224a0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName @ 1474224e0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration @ 147422520

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex @ 147422560

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed @ 1474225a0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName @ 1474225e0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction @ 147422620

UFunction * __cdecl
Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames @ 147422660

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag @ 1474226a0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataModel_GetFrameRate @ 1474226e0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_GetFrameRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_GetFrameRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag @ 147422720

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves @ 147422760

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bCheckForChildClass_SetBit @ 1474227a0

void __cdecl
Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::
NewProp_bCheckForChildClass_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames @ 1474227b0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve @ 1474227f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve(void)

{
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.
                OuterSingleton,
               &Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.OuterSingleton;
}

// Z_Construct_UClass_UAnimCompress_PerTrackCompression @ 147422830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimCompress_PerTrackCompression(void)

{
  if (Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.OuterSingleton,
               &Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.OuterSingleton;
}

// Z_Construct_UClass_UAnimCompress_RemoveLinearKeys @ 147422870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimCompress_RemoveLinearKeys(void)

{
  if (Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.OuterSingleton,
               &Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.OuterSingleton;
}

// Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass @ 1474228b0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys @ 1474228f0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bResampleAnimation_SetBit @ 147422930

void __cdecl
Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bResampleAnimation_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xa0) = *(uint *)((longlong)param_1 + 0xa0) | 1;
  return;
}

// NewProp_bUseAdaptiveError_SetBit @ 147422940

void __cdecl
Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) | 1;
  return;
}

// NewProp_bUseOverrideForEndEffectors_SetBit @ 147422950

void __cdecl
Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::
NewProp_bUseOverrideForEndEffectors_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) | 2;
  return;
}

// Z_Construct_UClass_UAnimDataModel @ 147422960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimDataModel(void)

{
  if (Z_Registration_Info_UClass_UAnimDataModel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimDataModel.OuterSingleton,
               &Z_Construct_UClass_UAnimDataModel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimDataModel.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAnimatedBoneAttribute @ 1474229a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimatedBoneAttribute(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimatedBoneAttribute.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimatedBoneAttribute.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimatedBoneAttribute.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimatedBoneAttribute.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimationCurveData @ 147422a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationCurveData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationCurveData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationCurveData.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationCurveData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationCurveData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAnimationCurveData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBoneAnimationTrack @ 147422aa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBoneAnimationTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBoneAnimationTrack.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBoneAnimationTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBoneAnimationTrack.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FBoneAnimationTrack.InnerSingleton;
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

// NewProp_bUseAdaptiveError2_SetBit @ 147422b20

void __cdecl
Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError2_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xbc) = *(uint *)((longlong)param_1 + 0xbc) | 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup @ 147422b30

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves @ 147422b70

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPopulated_SetBit @ 147422bb0

void __cdecl Z_Construct_UClass_UAnimDataModel_Statics::NewProp_bPopulated_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks @ 147422bc0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass @ 147422c00

UFunction * __cdecl
Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataModel_GetPlayLength @ 147422c40

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_GetPlayLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_GetPlayLength_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup @ 147422c80

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147422cc0

void __cdecl
Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex @ 147422cd0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetLODLevel @ 147422d10

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetLODLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAnimInstance_GetLODLevel_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147422d50

void __cdecl
Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName @ 147422e20

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetOwningActor @ 147422e60

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetOwningActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetOwningComponent @ 147422ea0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetOwningComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147422ee0

void __cdecl
Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances @ 147422ef0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147422f30

void __cdecl
Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances @ 147422f40

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength @ 147423000

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime @ 1474231e0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction @ 147423220

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining @ 147423260

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction @ 1474232a0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition @ 1474232e0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147423320

void __cdecl
Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker @ 147423330

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147423370

void __cdecl
Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame @ 147423410

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147423540

void __cdecl
Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying @ 147423550

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147423590

void __cdecl
Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation @ 1474235a0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1474235e0

void __cdecl
Z_Construct_UFunction_UAnimInstance_IsSlotActive_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_IsSlotActive @ 1474235f0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_IsSlotActive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAnimInstance_IsSlotActive_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bRespectMarkerOrder_SetBit @ 147423630

void __cdecl
Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::
NewProp_bRespectMarkerOrder_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147423640

void __cdecl
Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers @ 147423650

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147423690

void __cdecl
Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData @ 1474236a0

UFunction * __cdecl
Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers @ 1474236e0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag @ 1474237d0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLockMovement_SetBit @ 147423930

void __cdecl
Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_bLockMovement_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_LockAILogic_SetBit @ 147423940

void __cdecl
Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_LockAILogic_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_LockAIResources @ 147423950

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_LockAIResources(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime @ 147423990

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection @ 1474239d0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate @ 147423a10

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimInstance_NoRegister @ 147423a50

UClass * __cdecl Z_Construct_UClass_UAnimInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimInstance",
               &Z_Registration_Info_UClass_UAnimInstance.InnerSingleton,
               UAnimInstance::StaticRegisterNativesUAnimInstance,0x430,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimInstance>,InternalVTableHelperCtorCaller<UAnimInstance>,
               local_res8,UObject::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimInstance.InnerSingleton;
}

// NewProp_ReturnValue_SetBit @ 147423b10

void __cdecl
Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped @ 147423b20

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate @ 147423b60

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_Montage_GetPosition @ 147423ba0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_GetPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147423be0

void __cdecl
Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_Montage_IsActive @ 147423bf0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_IsActive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147423c30

void __cdecl
Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying @ 147423ca0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection @ 147423d30

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd @ 147423d70

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_Montage_Pause @ 147423db0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_Pause(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bStopAllMontages_SetBit @ 147423df0

void __cdecl
Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_bStopAllMontages_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UClass_UAnimationDataModel_NoRegister @ 147423e00

UClass * __cdecl Z_Construct_UClass_UAnimationDataModel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationDataModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationDataModel",
               &Z_Registration_Info_UClass_UAnimationDataModel.InnerSingleton,
               UAnimationDataModel::StaticRegisterNativesUAnimationDataModel,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationDataModel>,
               InternalVTableHelperCtorCaller<UAnimationDataModel>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationDataModel.InnerSingleton;
}

// Z_Construct_UFunction_UAnimInstance_Montage_Play @ 147423ec0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_Play(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bStopAllMontages_SetBit @ 147423fc0

void __cdecl
Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_bStopAllMontages_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn @ 147424010

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bStopAllMontages_SetBit @ 147424050

void __cdecl
Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::
NewProp_bStopAllMontages_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// Z_Construct_UClass_UAnimationDataController @ 147424060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimationDataController(void)

{
  if (Z_Registration_Info_UClass_UAnimationDataController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimationDataController.OuterSingleton,
               &Z_Construct_UClass_UAnimationDataController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimationDataController.OuterSingleton;
}

// NewProp_bShouldTransact_SetBit @ 1474240d0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 1474240e0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings @ 1474240f0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_AddAttribute @ 147424220

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_AddAttribute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_Montage_Resume @ 147424260

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_Resume(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 1474242a0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 1474242b0

void __cdecl
Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey @ 1474242c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey(void)

{
  if (Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.OuterSingleton,
               &Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.OuterSingleton;
}

// NewProp_bStartAtSecondKey_SetBit @ 147424300

void __cdecl
Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) | 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_AddBoneCurve @ 147424310

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_AddBoneCurve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection @ 147424350

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 147424390

void __cdecl
Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate @ 1474243a0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_AddBoneTrack @ 1474243e0

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_AddBoneTrack(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 147424420

void __cdecl
Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147424430

void __cdecl
Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_Montage_SetPosition @ 147424440

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_SetPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_AddCurve @ 147424480

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_AddCurve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_Montage_Stop @ 1474244c0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_Stop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 147424500

void __cdecl
Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::NewProp_bShouldTransact_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable @ 147424510

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable(void)

{
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.
                OuterSingleton,
               &Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.OuterSingleton;
}

// NewProp_bRetarget_SetBit @ 147424550

void __cdecl
Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5c) = *(uint *)((longlong)param_1 + 0x5c) | 1;
  return;
}

// NewProp_bActuallyFilterLinearKeys_SetBit @ 147424560

void __cdecl
Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5c) = *(uint *)((longlong)param_1 + 0x5c) | 2;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_CloseBracket @ 147424570

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_CloseBracket(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName @ 1474245b0

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 147424640

void __cdecl
Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147424650

void __cdecl
Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x81) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut @ 147424660

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute @ 147424760

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 147424800

void __cdecl
Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings @ 147424810

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147424850

void __cdecl
Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationDataController_DuplicateCurve @ 147424900

UFunction * __cdecl Z_Construct_UFunction_UAnimationDataController_DuplicateCurve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimInstance_MontageSync_Follow @ 147424940

UFunction * __cdecl Z_Construct_UFunction_UAnimInstance_MontageSync_Follow(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldTransact_SetBit @ 147424a40

void __cdecl
Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::
NewProp_bShouldTransact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// operator<<<FBoneReference,TSizedDefaultAllocator<32>_> @ 147424bd0

FArchive * __cdecl
operator<<<FBoneReference,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FBoneReference,TSizedDefaultAllocator<32>_> *param_2)

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
  FBoneReference *pFVar10;
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
              operator<<(param_1,(FBoneReference *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FBoneReference,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x410,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FBoneReference *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<FBoneReference,int>(pFVar10,1);
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

// operator<<<USkeletalMesh,FWeakObjectPtr> @ 147424be0

FArchive * __cdecl
operator<<<USkeletalMesh,FWeakObjectPtr>
          (FArchive *param_1,TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x138))();
  return param_1;
}

// operator<<<USkeleton,FWeakObjectPtr> @ 147424c10

FArchive * __cdecl
operator<<<USkeleton,FWeakObjectPtr>
          (FArchive *param_1,TWeakObjectPtr<USkeleton,FWeakObjectPtr> *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x138))();
  return param_1;
}

// AnimationFormat_SetInterfaceLinks<FUECompressedAnimData> @ 1474254c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStaticBasicLogRecord *pFVar4;
  AEFConstantKeyLerp<3> *pAVar5;
  AEFConstantKeyLerp<1> *pAVar6;
  AEFConstantKeyLerp<0> *pAVar7;
  AEFConstantKeyLerp<6> *pAVar8;
  
  iVar1 = *(int *)&param_1->field_0x60;
  *(undefined8 *)&param_1->field_0x48 = 0;
  *(undefined8 *)&param_1->field_0x50 = 0;
  *(undefined8 *)&param_1->field_0x58 = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)&param_1->field_0x64;
    pAVar8 = &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
              ::__l5::AEFConstantKeyLerp_Identity;
    pAVar5 = &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
              ::__l5::AEFConstantKeyLerp_IntervalFixed32NoW;
    pAVar7 = &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
              ::__l5::AEFConstantKeyLerp_None;
    pAVar6 = &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
              ::__l5::AEFConstantKeyLerp_Float96NoW;
    if (iVar1 == 0) {
      *(AEFConstantKeyLerp<0> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l5::AEFConstantKeyLerp_None;
    }
    else if (iVar1 == 1) {
      *(AEFConstantKeyLerp<1> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l5::AEFConstantKeyLerp_Float96NoW;
    }
    else if (iVar1 == 3) {
      *(AEFConstantKeyLerp<3> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l5::AEFConstantKeyLerp_IntervalFixed32NoW;
    }
    else if (iVar1 == 6) {
      *(AEFConstantKeyLerp<6> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l5::AEFConstantKeyLerp_Identity;
    }
    else {
      UE::Logging::Private::BasicFatalLog
                (&`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    switch(*(undefined4 *)&param_1->field_0x68) {
    case 0:
      *(AEFConstantKeyLerp<0> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l5::AEFConstantKeyLerp_None;
      break;
    case 1:
      *(AEFConstantKeyLerp<1> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l5::AEFConstantKeyLerp_Float96NoW;
      break;
    case 2:
      *(AEFConstantKeyLerp<2> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l5::AEFConstantKeyLerp_Fixed48NoW;
      break;
    case 3:
      *(AEFConstantKeyLerp<3> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l5::AEFConstantKeyLerp_IntervalFixed32NoW;
      break;
    case 4:
      *(AEFConstantKeyLerp<4> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l5::AEFConstantKeyLerp_Fixed32NoW;
      break;
    case 5:
      *(AEFConstantKeyLerp<5> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l5::AEFConstantKeyLerp_Float32NoW;
      break;
    case 6:
      *(AEFConstantKeyLerp<6> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l5::AEFConstantKeyLerp_Identity;
      break;
    default:
      UE::Logging::Private::BasicFatalLog
                (&`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    iVar1 = *(int *)&param_1->field_0x6c;
    if (iVar1 == 0) {
LAB_14742571f:
      *(AEFConstantKeyLerp<0> **)&param_1->field_0x58 = pAVar7;
      return;
    }
    if (iVar1 == 1) {
LAB_147425607:
      *(AEFConstantKeyLerp<1> **)&param_1->field_0x58 = pAVar6;
      return;
    }
    if (iVar1 == 3) {
LAB_1474255fe:
      *(AEFConstantKeyLerp<3> **)&param_1->field_0x58 = pAVar5;
      return;
    }
    if (iVar1 == 6) {
LAB_1474255f5:
      *(AEFConstantKeyLerp<6> **)&param_1->field_0x58 = pAVar8;
      return;
    }
    pFVar4 = &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
              ::__l22::LOG_Static;
  }
  else if (iVar1 == 1) {
    iVar1 = *(int *)&param_1->field_0x64;
    if (iVar1 == 0) {
      *(AEFVariableKeyLerp<0> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l30::AEFVariableKeyLerp_None;
    }
    else if (iVar1 == 1) {
      *(AEFVariableKeyLerp<1> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l30::AEFVariableKeyLerp_Float96NoW;
    }
    else if (iVar1 == 3) {
      *(AEFVariableKeyLerp<3> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l30::AEFVariableKeyLerp_IntervalFixed32NoW;
    }
    else if (iVar1 == 6) {
      *(AEFVariableKeyLerp<6> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l30::AEFVariableKeyLerp_Identity;
    }
    else {
      UE::Logging::Private::BasicFatalLog
                (&`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
                  ::__l33::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    switch(*(undefined4 *)&param_1->field_0x68) {
    case 0:
      *(AEFVariableKeyLerp<0> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l30::AEFVariableKeyLerp_None;
      break;
    case 1:
      *(AEFVariableKeyLerp<1> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l30::AEFVariableKeyLerp_Float96NoW;
      break;
    case 2:
      *(AEFVariableKeyLerp<2> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l30::AEFVariableKeyLerp_Fixed48NoW;
      break;
    case 3:
      *(AEFVariableKeyLerp<3> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l30::AEFVariableKeyLerp_IntervalFixed32NoW;
      break;
    case 4:
      *(AEFVariableKeyLerp<4> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l30::AEFVariableKeyLerp_Fixed32NoW;
      break;
    case 5:
      *(AEFVariableKeyLerp<5> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l30::AEFVariableKeyLerp_Float32NoW;
      break;
    case 6:
      *(AEFVariableKeyLerp<6> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l30::AEFVariableKeyLerp_Identity;
      break;
    default:
      UE::Logging::Private::BasicFatalLog
                (&`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
                  ::__l40::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    iVar1 = *(int *)&param_1->field_0x6c;
    pAVar7 = (AEFConstantKeyLerp<0> *)
             &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
              ::__l30::AEFVariableKeyLerp_None;
    if (iVar1 == 0) goto LAB_14742571f;
    pAVar6 = (AEFConstantKeyLerp<1> *)
             &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
              ::__l30::AEFVariableKeyLerp_Float96NoW;
    if (iVar1 == 1) goto LAB_147425607;
    pAVar5 = (AEFConstantKeyLerp<3> *)
             &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
              ::__l30::AEFVariableKeyLerp_IntervalFixed32NoW;
    if (iVar1 == 3) goto LAB_1474255fe;
    pAVar8 = (AEFConstantKeyLerp<6> *)
             &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
              ::__l30::AEFVariableKeyLerp_Identity;
    if (iVar1 == 6) goto LAB_1474255f5;
    pFVar4 = &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
              ::__l47::LOG_Static;
  }
  else {
    if (iVar1 == 2) {
      *(AEFPerTrackCompressionCodec **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l55::StaticCodec;
      *(AEFPerTrackCompressionCodec **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l55::StaticCodec;
      *(AEFPerTrackCompressionCodec **)&param_1->field_0x58 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
            ::__l55::StaticCodec;
      if ((*(int *)&param_1->field_0x68 != 6) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("CompressedData.RotationCompressionFormat == ACF_Identity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimEncoding.cpp"
                             ,0x2f1,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&param_1->field_0x64 == 6) {
        return;
      }
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("CompressedData.TranslationCompressionFormat == ACF_Identity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimEncoding.cpp"
                         ,0x2f2,L"");
      if (!bVar3) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar4 = &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>(FUECompressedAnimData&___ptr64)'
              ::__l72::LOG_Static;
  }
  UE::Logging::Private::BasicFatalLog(pFVar4,(FLogCategoryBase *)&LogAnimationCompression);
  return;
}

// AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable> @ 147425810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>
          (FUECompressedAnimDataMutable *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStaticBasicLogRecord *pFVar4;
  AEFConstantKeyLerp<3> *pAVar5;
  AEFConstantKeyLerp<1> *pAVar6;
  AEFConstantKeyLerp<0> *pAVar7;
  AEFConstantKeyLerp<6> *pAVar8;
  
  iVar1 = *(int *)&param_1->field_0x60;
  *(undefined8 *)&param_1->field_0x48 = 0;
  *(undefined8 *)&param_1->field_0x50 = 0;
  *(undefined8 *)&param_1->field_0x58 = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)&param_1->field_0x64;
    pAVar8 = &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
              ::__l5::AEFConstantKeyLerp_Identity;
    pAVar5 = &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
              ::__l5::AEFConstantKeyLerp_IntervalFixed32NoW;
    pAVar7 = &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
              ::__l5::AEFConstantKeyLerp_None;
    pAVar6 = &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
              ::__l5::AEFConstantKeyLerp_Float96NoW;
    if (iVar1 == 0) {
      *(AEFConstantKeyLerp<0> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l5::AEFConstantKeyLerp_None;
    }
    else if (iVar1 == 1) {
      *(AEFConstantKeyLerp<1> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l5::AEFConstantKeyLerp_Float96NoW;
    }
    else if (iVar1 == 3) {
      *(AEFConstantKeyLerp<3> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l5::AEFConstantKeyLerp_IntervalFixed32NoW;
    }
    else if (iVar1 == 6) {
      *(AEFConstantKeyLerp<6> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l5::AEFConstantKeyLerp_Identity;
    }
    else {
      UE::Logging::Private::BasicFatalLog
                (&`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    switch(*(undefined4 *)&param_1->field_0x68) {
    case 0:
      *(AEFConstantKeyLerp<0> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l5::AEFConstantKeyLerp_None;
      break;
    case 1:
      *(AEFConstantKeyLerp<1> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l5::AEFConstantKeyLerp_Float96NoW;
      break;
    case 2:
      *(AEFConstantKeyLerp<2> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l5::AEFConstantKeyLerp_Fixed48NoW;
      break;
    case 3:
      *(AEFConstantKeyLerp<3> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l5::AEFConstantKeyLerp_IntervalFixed32NoW;
      break;
    case 4:
      *(AEFConstantKeyLerp<4> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l5::AEFConstantKeyLerp_Fixed32NoW;
      break;
    case 5:
      *(AEFConstantKeyLerp<5> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l5::AEFConstantKeyLerp_Float32NoW;
      break;
    case 6:
      *(AEFConstantKeyLerp<6> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l5::AEFConstantKeyLerp_Identity;
      break;
    default:
      UE::Logging::Private::BasicFatalLog
                (&`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    iVar1 = *(int *)&param_1->field_0x6c;
    if (iVar1 == 0) {
LAB_147425a6f:
      *(AEFConstantKeyLerp<0> **)&param_1->field_0x58 = pAVar7;
      return;
    }
    if (iVar1 == 1) {
LAB_147425957:
      *(AEFConstantKeyLerp<1> **)&param_1->field_0x58 = pAVar6;
      return;
    }
    if (iVar1 == 3) {
LAB_14742594e:
      *(AEFConstantKeyLerp<3> **)&param_1->field_0x58 = pAVar5;
      return;
    }
    if (iVar1 == 6) {
LAB_147425945:
      *(AEFConstantKeyLerp<6> **)&param_1->field_0x58 = pAVar8;
      return;
    }
    pFVar4 = &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
              ::__l22::LOG_Static;
  }
  else if (iVar1 == 1) {
    iVar1 = *(int *)&param_1->field_0x64;
    if (iVar1 == 0) {
      *(AEFVariableKeyLerp<0> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l30::AEFVariableKeyLerp_None;
    }
    else if (iVar1 == 1) {
      *(AEFVariableKeyLerp<1> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l30::AEFVariableKeyLerp_Float96NoW;
    }
    else if (iVar1 == 3) {
      *(AEFVariableKeyLerp<3> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l30::AEFVariableKeyLerp_IntervalFixed32NoW;
    }
    else if (iVar1 == 6) {
      *(AEFVariableKeyLerp<6> **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l30::AEFVariableKeyLerp_Identity;
    }
    else {
      UE::Logging::Private::BasicFatalLog
                (&`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
                  ::__l33::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    switch(*(undefined4 *)&param_1->field_0x68) {
    case 0:
      *(AEFVariableKeyLerp<0> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l30::AEFVariableKeyLerp_None;
      break;
    case 1:
      *(AEFVariableKeyLerp<1> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l30::AEFVariableKeyLerp_Float96NoW;
      break;
    case 2:
      *(AEFVariableKeyLerp<2> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l30::AEFVariableKeyLerp_Fixed48NoW;
      break;
    case 3:
      *(AEFVariableKeyLerp<3> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l30::AEFVariableKeyLerp_IntervalFixed32NoW;
      break;
    case 4:
      *(AEFVariableKeyLerp<4> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l30::AEFVariableKeyLerp_Fixed32NoW;
      break;
    case 5:
      *(AEFVariableKeyLerp<5> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l30::AEFVariableKeyLerp_Float32NoW;
      break;
    case 6:
      *(AEFVariableKeyLerp<6> **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l30::AEFVariableKeyLerp_Identity;
      break;
    default:
      UE::Logging::Private::BasicFatalLog
                (&`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
                  ::__l40::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    iVar1 = *(int *)&param_1->field_0x6c;
    pAVar7 = (AEFConstantKeyLerp<0> *)
             &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
              ::__l30::AEFVariableKeyLerp_None;
    if (iVar1 == 0) goto LAB_147425a6f;
    pAVar6 = (AEFConstantKeyLerp<1> *)
             &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
              ::__l30::AEFVariableKeyLerp_Float96NoW;
    if (iVar1 == 1) goto LAB_147425957;
    pAVar5 = (AEFConstantKeyLerp<3> *)
             &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
              ::__l30::AEFVariableKeyLerp_IntervalFixed32NoW;
    if (iVar1 == 3) goto LAB_14742594e;
    pAVar8 = (AEFConstantKeyLerp<6> *)
             &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
              ::__l30::AEFVariableKeyLerp_Identity;
    if (iVar1 == 6) goto LAB_147425945;
    pFVar4 = &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
              ::__l47::LOG_Static;
  }
  else {
    if (iVar1 == 2) {
      *(AEFPerTrackCompressionCodec **)&param_1->field_0x50 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l55::StaticCodec;
      *(AEFPerTrackCompressionCodec **)&param_1->field_0x48 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l55::StaticCodec;
      *(AEFPerTrackCompressionCodec **)&param_1->field_0x58 =
           &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
            ::__l55::StaticCodec;
      if ((*(int *)&param_1->field_0x68 != 6) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("CompressedData.RotationCompressionFormat == ACF_Identity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimEncoding.cpp"
                             ,0x2f1,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&param_1->field_0x64 == 6) {
        return;
      }
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("CompressedData.TranslationCompressionFormat == ACF_Identity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimEncoding.cpp"
                         ,0x2f2,L"");
      if (!bVar3) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar4 = &`void___cdecl_AnimationFormat_SetInterfaceLinks<FUECompressedAnimDataMutable>(FUECompressedAnimDataMutable&___ptr64)'
              ::__l72::LOG_Static;
  }
  UE::Logging::Private::BasicFatalLog(pFVar4,(FLogCategoryBase *)&LogAnimationCompression);
  return;
}

// BinarySearchBy<TArray<TTuple<FName,UMeshComponent::FMaterialParameterCache>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 147425b60

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FName,UMeshComponent::FMaterialParameterCache>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TArray<TTuple<FName,UMeshComponent::FMaterialParameterCache>,TSizedDefaultAllocator<32>_>
           *param_1,FName *param_2,FKeyForward param_3,FNameFastLess param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_1->ArrayNum;
  iVar4 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (0 < (int)uVar1) {
    uVar7 = uVar1;
    do {
      iVar5 = (uVar7 >> 1) + iVar4;
      iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x30) - (param_2->ComparisonIndex).Value;
      if (iVar6 == 0) {
        iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x30 + 4) - param_2->Number;
      }
      if (iVar6 < 0) {
        iVar4 = iVar5 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
    if (iVar4 < (int)uVar1) {
      iVar5 = (param_2->ComparisonIndex).Value - *(int *)(pFVar2 + (longlong)iVar4 * 0x30);
      if (iVar5 == 0) {
        iVar5 = param_2->Number - *(int *)(pFVar2 + (longlong)iVar4 * 0x30 + 4);
      }
      iVar6 = -1;
      if (-1 < iVar5) {
        iVar6 = iVar4;
      }
      return iVar6;
    }
  }
  return -1;
}

// BuildLinearUnfiltered<`UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves'::__l2::<lambda_1>,`UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 147425c10

void __cdecl
UE::Anim::FCurveUtils::
BuildLinearUnfiltered<_UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves_::__l2::<lambda_1>,_UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,int param_2,
          <lambda_1> param_3,<lambda_2> *param_4)

{
  int *piVar1;
  uchar *puVar2;
  TArray<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_> *pTVar3;
  FStaticEvalArgs *pFVar4;
  uchar *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  
  iVar11 = *(int *)((longlong)&param_1->_padding_ + 4);
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (iVar11 < 0) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,piVar1);
  }
  *(undefined1 *)&param_1->_padding_ = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (*piVar1 < param_2) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,param_2,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               (int)param_1->_padding_,piVar1);
  }
  uVar14 = 0;
  if (0 < param_2) {
    lVar15 = 0;
    do {
      puVar2 = param_4->Buffer;
      pTVar3 = param_4->IndexedCurveNames;
      uVar9 = 0;
      if ((int)uVar14 < pTVar3->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar12 = (longlong)*(int *)((pTVar3->AllocatorInstance).Data + lVar15 + 8);
      pFVar4 = param_4->Args;
      iVar11 = *(int *)(puVar2 + lVar12 * 0xc + 8);
      puVar5 = param_4->Buffer;
      pFVar4->CompressionFormat = (uint)puVar2[lVar12 * 0xc];
      pFVar4->KeyTimeCompressionFormat = (uint)puVar2[lVar12 * 0xc + 1];
      pFVar4->PreInfinityExtrap = (uint)puVar2[lVar12 * 0xc + 2];
      pFVar4->PostInfinityExtrap = (uint)puVar2[lVar12 * 0xc + 3];
      pFVar4->ConstantValueNumKeys = *(TConstantValueNumKeys *)(puVar2 + lVar12 * 0xc + 4);
      pFVar4->CompressedKeys = puVar5 + iVar11;
      fVar16 = FCompressedRichCurve::StaticEval(pFVar4);
      uVar9 = 0;
      if ((int)uVar14 < (param_3.IndexedCurveNames)->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar9 = *(uint *)(((param_3.IndexedCurveNames)->AllocatorInstance).Data + lVar15 + 8);
      uVar10 = 0;
      if ((int)uVar9 < (param_3.IndexedCurveNames)->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (int)param_1->_padding_;
      uVar6 = *(undefined8 *)
               (((param_3.IndexedCurveNames)->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc);
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                           (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1);
      }
      *(int *)&param_1->_padding_ = iVar11 + 1;
      uVar14 = uVar14 + 1;
      lVar13 = (longlong)iVar11;
      lVar12 = param_1->_padding_;
      lVar15 = lVar15 + 0xc;
      *(float *)(lVar12 + 8 + lVar13 * 0x10) = fVar16;
      *(undefined8 *)(lVar12 + lVar13 * 0x10) = uVar6;
      *(undefined1 *)(lVar12 + 0xc + lVar13 * 0x10) = 0;
    } while ((int)uVar14 < param_2);
  }
  return;
}

// BuildLinearUnfiltered<`UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves'::__l2::<lambda_1>,`UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 147425ea0

void __cdecl
UE::Anim::FCurveUtils::
BuildLinearUnfiltered<_UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves_::__l2::<lambda_1>,_UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,int param_2,
          <lambda_1> param_3,<lambda_2> *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TArray<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong local_res8;
  
  iVar11 = *(int *)((longlong)&param_1->_padding_ + 4);
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (iVar11 < 0) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,piVar1);
  }
  *(undefined1 *)&param_1->_padding_ = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (*piVar1 < param_2) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,param_2,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               (int)param_1->_padding_,piVar1);
  }
  uVar14 = 0;
  if (0 < param_2) {
    local_res8 = 0;
    do {
      pTVar5 = param_4->IndexedCurveNames;
      uVar9 = 0;
      if ((int)uVar14 < pTVar5->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar13 = (longlong)
               (*(int *)((pTVar5->AllocatorInstance).Data + local_res8 + 8) * param_4->NumSamples);
      fVar2 = param_4->AnimatedSamplesPtr[param_4->SampleIndex0 + lVar13];
      fVar3 = param_4->AnimatedSamplesPtr[param_4->SampleIndex1 + lVar13];
      uVar9 = 0;
      if ((int)uVar14 < (param_3.IndexedCurveNames)->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      fVar4 = param_4->InterpolationAlpha;
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar9 = *(uint *)(((param_3.IndexedCurveNames)->AllocatorInstance).Data + local_res8 + 8);
      uVar10 = 0;
      if ((int)uVar9 < (param_3.IndexedCurveNames)->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (int)param_1->_padding_;
      uVar6 = *(undefined8 *)
               (((param_3.IndexedCurveNames)->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc);
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                           (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1);
      }
      local_res8 = local_res8 + 0xc;
      *(int *)&param_1->_padding_ = iVar11 + 1;
      uVar14 = uVar14 + 1;
      lVar12 = (longlong)iVar11;
      lVar13 = param_1->_padding_;
      *(float *)(lVar13 + 8 + lVar12 * 0x10) = (fVar3 - fVar2) * fVar4 + fVar2;
      *(undefined8 *)(lVar13 + lVar12 * 0x10) = uVar6;
      *(undefined1 *)(lVar13 + 0xc + lVar12 * 0x10) = 0;
    } while ((int)uVar14 < param_2);
  }
  return;
}

// BuildLinearUnfiltered<`UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves'::__l2::<lambda_1>,`UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 147426110

void __cdecl
UE::Anim::FCurveUtils::
BuildLinearUnfiltered<_UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves_::__l2::<lambda_1>,_UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,int param_2,
          <lambda_1> param_3,<lambda_2> *param_4)

{
  TArray<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  
  iVar6 = *(int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (iVar6 < 0) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,
               (int *)((longlong)&param_1->_padding_ + 4));
  }
  piVar11 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)&param_1->_padding_ = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (*piVar11 < param_2) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,param_2,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               (int)param_1->_padding_,piVar11);
  }
  uVar14 = 0;
  if (0 < param_2) {
    lVar12 = 0;
    do {
      pTVar1 = param_4->IndexedCurveNames;
      uVar13 = 0;
      if ((int)uVar14 < pTVar1->ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      iVar6 = *(int *)(pFVar2 + lVar12 + 8);
      bVar9 = (byte)*(undefined4 *)(pFVar2 + lVar12 + 8) & 0x1f;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0x1f;
        bVar9 = bVar9 - 0x20;
      }
      uVar13 = 1 << (bVar9 & 0x1f) & param_4->ConstantCurvesBitsetPtr[iVar6 >> 5];
      if (uVar13 == 0) {
        fVar15 = (param_4->AnimatedSamples1[*param_4->AnimatedCurveIndex] -
                 param_4->AnimatedSamples0[*param_4->AnimatedCurveIndex]) *
                 param_4->InterpolationAlpha +
                 param_4->AnimatedSamples0[*param_4->AnimatedCurveIndex];
      }
      else {
        fVar15 = param_4->ConstantSamplesPtr[*param_4->ConstantCurveIndex];
      }
      lVar8 = 0x10;
      if (uVar13 == 0) {
        lVar8 = 0x18;
      }
      piVar11 = *(int **)((longlong)&param_4->IndexedCurveNames + lVar8);
      *piVar11 = *piVar11 + 1;
      uVar13 = 0;
      if ((int)uVar14 < (param_3.IndexedCurveNames)->ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar13 = *(uint *)(((param_3.IndexedCurveNames)->AllocatorInstance).Data + lVar12 + 8);
      uVar7 = 0;
      if ((int)uVar13 < (param_3.IndexedCurveNames)->ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (int)param_1->_padding_;
      uVar3 = *(undefined8 *)
               (((param_3.IndexedCurveNames)->AllocatorInstance).Data + (longlong)(int)uVar13 * 0xc)
      ;
      if (iVar6 == *(int *)((longlong)&param_1->_padding_ + 4)) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                          (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,
                           (int *)((longlong)&param_1->_padding_ + 4));
      }
      *(int *)&param_1->_padding_ = iVar6 + 1;
      lVar10 = (longlong)iVar6;
      uVar14 = uVar14 + 1;
      lVar8 = param_1->_padding_;
      lVar12 = lVar12 + 0xc;
      *(float *)(lVar8 + 8 + lVar10 * 0x10) = fVar15;
      *(undefined8 *)(lVar8 + lVar10 * 0x10) = uVar3;
      *(undefined1 *)(lVar8 + 0xc + lVar10 * 0x10) = 0;
    } while ((int)uVar14 < param_2);
  }
  return;
}

// BuildLinearUnfiltered<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 1474263e0

void __cdecl
UE::Anim::FCurveUtils::
BuildLinearUnfiltered<_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_1>,_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,int param_2,
          <lambda_1> param_3,<lambda_2> *param_4)

{
  int *piVar1;
  FRawCurveTracks *pFVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  
  iVar8 = *(int *)((longlong)&param_1->_padding_ + 4);
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (iVar8 < 0) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,piVar1);
  }
  *(undefined1 *)&param_1->_padding_ = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (*piVar1 < param_2) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,param_2,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               (int)param_1->_padding_,piVar1);
  }
  uVar10 = 0;
  if (0 < param_2) {
    lVar11 = 0;
    do {
      pFVar2 = param_4->__this;
      uVar7 = 0;
      if ((int)uVar10 < (pFVar2->FloatCurves).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar12 = FRichCurve::Eval((FRichCurve *)
                                ((pFVar2->FloatCurves).AllocatorInstance.Data + lVar11 + 0x10),
                                param_4->CurrentTime,0.0);
      uVar7 = 0;
      if ((int)uVar10 < ((param_3.__this)->FloatCurves).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (int)param_1->_padding_;
      uVar3 = *(undefined8 *)(((param_3.__this)->FloatCurves).AllocatorInstance.Data + lVar11);
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                          (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1);
      }
      uVar10 = uVar10 + 1;
      *(int *)&param_1->_padding_ = iVar8 + 1;
      lVar9 = (longlong)iVar8;
      lVar11 = lVar11 + 0x90;
      lVar4 = param_1->_padding_;
      *(undefined8 *)(lVar4 + lVar9 * 0x10) = uVar3;
      *(float *)(lVar4 + 8 + lVar9 * 0x10) = fVar12;
      *(undefined1 *)(lVar4 + 0xc + lVar9 * 0x10) = 0;
    } while ((int)uVar10 < param_2);
  }
  return;
}

// BuildSortedFiltered<`UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves'::__l2::<lambda_1>,`UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 1474265f0

void __cdecl
UE::Anim::FCurveUtils::
BuildSortedFiltered<_UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves_::__l2::<lambda_1>,_UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,int param_2,
          <lambda_1> param_3,<lambda_2> *param_4,FCurveFilter *param_5)

{
  longlong *plVar1;
  int *piVar2;
  ECurveFilterMode EVar3;
  longlong lVar4;
  TArray<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_> *pTVar5;
  uchar *puVar6;
  FStaticEvalArgs *pFVar7;
  uchar *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FName FVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  TArray<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_> *local_res18;
  <lambda_2> *local_res20;
  uint local_88;
  longlong local_78;
  undefined1 local_58 [32];
  
  lVar20 = (longlong)param_2;
  local_res18 = param_3.IndexedCurveNames;
  local_res20 = param_4;
  if (param_5->FilterMode == DisallowAll) {
    iVar13 = *(int *)((longlong)&param_1->_padding_ + 4);
    *(undefined4 *)&param_1->_padding_ = 0;
    if (iVar13 < 0) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,
                 (int *)((longlong)&param_1->_padding_ + 4));
    }
    *(undefined1 *)&param_1->_padding_ = 0;
    return;
  }
  plVar1 = &param_5->_padding_;
  if ((char)param_5->_padding_ == '\0') {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveFilterElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveFilterElement>::FElementSortPredicate>
              ((FCurveFilterElement *)param_5->_padding_,(int)*plVar1,param_5._0_1_,
               (FElementSortPredicate)param_5._0_1_);
    *(undefined1 *)&param_5->_padding_ = 1;
  }
  iVar13 = *(int *)((longlong)&param_1->_padding_ + 4);
  piVar2 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (iVar13 < 0) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,piVar2);
  }
  *(undefined1 *)&param_1->_padding_ = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (*piVar2 < param_2) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,param_2,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               (int)param_1->_padding_,piVar2);
  }
  lVar16 = (longlong)(int)*plVar1;
  uVar21 = 0;
  local_88 = 0;
  lVar23 = 0;
  lVar24 = 0;
  lVar19 = 0;
  local_78 = 0;
  do {
    while( true ) {
      pTVar5 = local_res18;
      if (lVar20 <= lVar23) {
        if (lVar16 <= lVar24) {
          return;
        }
        if ((lVar23 == lVar20) && (lVar24 < lVar16)) {
          return;
        }
      }
      if ((lVar24 == lVar16) && (lVar23 < lVar20)) {
        iVar13 = (int)param_1->_padding_;
        uVar22 = (iVar13 - uVar21) + param_2;
        if (-1 < (int)uVar22) {
          if (*(int *)((longlong)&param_1->_padding_ + 4) < (int)uVar22) {
            Core::Private::
            ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                      (0x10,4,uVar22,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar13,
                       (int *)((longlong)&param_1->_padding_ + 4));
          }
          for (; (int)uVar21 < param_2; uVar21 = uVar21 + 1) {
            EVar3 = param_5->FilterMode;
            if ((EVar3 == None) ||
               (((EVar3 != DisallowAll && (EVar3 != AllowOnlyFiltered)) &&
                (EVar3 == DisallowFiltered)))) {
              fVar25 = `UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves'::__l2::
                       <lambda_2>::operator()(local_res20,uVar21);
              FVar14 = `UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves'::__l2::
                       <lambda_1>::operator()(&local_res18,(int)local_58);
              iVar13 = (int)param_1->_padding_;
              if (iVar13 == *(int *)((longlong)&param_1->_padding_ + 4)) {
                iVar13 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                                   (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,
                                    (int *)((longlong)&param_1->_padding_ + 4));
              }
              lVar16 = (longlong)iVar13;
              *(int *)&param_1->_padding_ = iVar13 + 1;
              uVar9 = *(undefined8 *)FVar14;
              lVar20 = param_1->_padding_;
              *(float *)(lVar20 + 8 + lVar16 * 0x10) = fVar25;
              *(undefined8 *)(lVar20 + lVar16 * 0x10) = uVar9;
              *(undefined1 *)(lVar20 + 0xc + lVar16 * 0x10) = 0;
            }
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      uVar22 = 0;
      if ((int)uVar21 < local_res18->ArrayNum) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar22 = *(uint *)((pTVar5->AllocatorInstance).Data + lVar19 + 8);
      uVar12 = 0;
      if ((int)uVar22 < pTVar5->ArrayNum) {
        uVar12 = ~uVar22 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar4 = *(longlong *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar22 * 0xc);
      uVar22 = 0;
      if ((int)local_88 < (int)*plVar1) {
        uVar22 = ~local_88 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar17 = *(longlong *)(local_78 + param_5->_padding_);
      if (lVar4 == lVar17) break;
      iVar13 = (int)lVar4 - (int)lVar17;
      if (iVar13 == 0) {
        iVar13 = (int)((ulonglong)lVar4 >> 0x20) - (int)((ulonglong)lVar17 >> 0x20);
      }
      if (iVar13 < 0) {
        EVar3 = param_5->FilterMode;
        if ((EVar3 == None) ||
           (((EVar3 != DisallowAll && (EVar3 != AllowOnlyFiltered)) && (EVar3 == DisallowFiltered)))
           ) {
          fVar25 = `UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves'::__l2::
                   <lambda_2>::operator()(local_res20,uVar21);
          iVar13 = (int)param_1->_padding_;
          piVar2 = (int *)((longlong)&param_1->_padding_ + 4);
          if (iVar13 == *piVar2) {
            iVar13 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                               (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar2);
          }
          *(int *)&param_1->_padding_ = iVar13 + 1;
          lVar18 = (longlong)iVar13;
          lVar17 = param_1->_padding_;
          *(float *)(lVar17 + 8 + lVar18 * 0x10) = fVar25;
          *(longlong *)(lVar17 + lVar18 * 0x10) = lVar4;
          *(undefined1 *)(lVar17 + 0xc + lVar18 * 0x10) = 0;
        }
        uVar21 = uVar21 + 1;
        lVar23 = lVar23 + 1;
        lVar19 = lVar19 + 0xc;
      }
      else {
        local_88 = local_88 + 1;
        lVar24 = lVar24 + 1;
        local_78 = local_78 + 0xc;
      }
    }
    bVar15 = *(byte *)(local_78 + 8 + param_5->_padding_);
    if ((bVar15 & 1) == 0) {
      EVar3 = param_5->FilterMode;
      if (EVar3 == None) {
LAB_1474268f9:
        pTVar5 = local_res20->IndexedCurveNames;
        puVar6 = local_res20->Buffer;
        uVar22 = 0;
        if ((int)uVar21 < pTVar5->ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar17 = (longlong)*(int *)((pTVar5->AllocatorInstance).Data + lVar19 + 8);
        pFVar7 = local_res20->Args;
        iVar13 = *(int *)(puVar6 + lVar17 * 0xc + 8);
        puVar8 = local_res20->Buffer;
        pFVar7->CompressionFormat = (uint)puVar6[lVar17 * 0xc];
        pFVar7->KeyTimeCompressionFormat = (uint)puVar6[lVar17 * 0xc + 1];
        pFVar7->PreInfinityExtrap = (uint)puVar6[lVar17 * 0xc + 2];
        pFVar7->PostInfinityExtrap = (uint)puVar6[lVar17 * 0xc + 3];
        pFVar7->ConstantValueNumKeys = *(TConstantValueNumKeys *)(puVar6 + lVar17 * 0xc + 4);
        pFVar7->CompressedKeys = puVar8 + iVar13;
        fVar25 = FCompressedRichCurve::StaticEval(pFVar7);
        iVar13 = (int)param_1->_padding_;
        piVar2 = (int *)((longlong)&param_1->_padding_ + 4);
        if (iVar13 == *piVar2) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                             (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar2);
        }
        *(int *)&param_1->_padding_ = iVar13 + 1;
        lVar18 = (longlong)iVar13;
        lVar17 = param_1->_padding_;
        *(float *)(lVar17 + 8 + lVar18 * 0x10) = fVar25;
        *(longlong *)(lVar17 + lVar18 * 0x10) = lVar4;
        *(undefined1 *)(lVar17 + 0xc + lVar18 * 0x10) = 0;
      }
      else if (EVar3 != DisallowAll) {
        if (EVar3 == AllowOnlyFiltered) {
          bVar15 = bVar15 >> 1;
        }
        else {
          if (EVar3 != DisallowFiltered) goto LAB_1474269fd;
          bVar15 = ~(bVar15 >> 1);
        }
        if ((bVar15 & 1) != 0) goto LAB_1474268f9;
      }
    }
LAB_1474269fd:
    uVar21 = uVar21 + 1;
    lVar19 = lVar19 + 0xc;
    lVar23 = lVar23 + 1;
    local_88 = local_88 + 1;
    lVar24 = lVar24 + 1;
    local_78 = local_78 + 0xc;
  } while( true );
}

// BuildSortedFiltered<`UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves'::__l2::<lambda_1>,`UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 147426c20

void __cdecl
UE::Anim::FCurveUtils::
BuildSortedFiltered<_UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves_::__l2::<lambda_1>,_UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,int param_2,
          <lambda_1> param_3,<lambda_2> *param_4,FCurveFilter *param_5)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  ECurveFilterMode EVar4;
  longlong lVar5;
  TArray<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FName FVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  int *piVar23;
  float fVar24;
  TArray<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_> *local_res18;
  <lambda_2> *local_res20;
  uint local_88;
  longlong local_78;
  undefined1 local_58 [32];
  
  lVar17 = (longlong)param_2;
  local_res18 = param_3.IndexedCurveNames;
  local_res20 = param_4;
  if (param_5->FilterMode == DisallowAll) {
    iVar11 = *(int *)((longlong)&param_1->_padding_ + 4);
    *(undefined4 *)&param_1->_padding_ = 0;
    if (iVar11 < 0) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,
                 (int *)((longlong)&param_1->_padding_ + 4));
    }
    *(undefined1 *)&param_1->_padding_ = 0;
    return;
  }
  plVar1 = &param_5->_padding_;
  if ((char)param_5->_padding_ == '\0') {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveFilterElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveFilterElement>::FElementSortPredicate>
              ((FCurveFilterElement *)param_5->_padding_,(int)*plVar1,param_5._0_1_,
               (FElementSortPredicate)param_5._0_1_);
    *(undefined1 *)&param_5->_padding_ = 1;
  }
  iVar11 = *(int *)((longlong)&param_1->_padding_ + 4);
  piVar23 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (iVar11 < 0) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,piVar23);
  }
  *(undefined1 *)&param_1->_padding_ = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (*piVar23 < param_2) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,param_2,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               (int)param_1->_padding_,piVar23);
  }
  lVar14 = (longlong)(int)*plVar1;
  uVar19 = 0;
  lVar21 = 0;
  local_88 = 0;
  lVar22 = 0;
  lVar18 = 0;
  local_78 = 0;
  do {
    while( true ) {
      pTVar6 = local_res18;
      piVar23 = (int *)((longlong)&param_1->_padding_ + 4);
      if (lVar17 <= lVar21) {
        if (lVar14 <= lVar22) {
          return;
        }
        if ((lVar21 == lVar17) && (lVar22 < lVar14)) {
          return;
        }
      }
      if ((lVar22 == lVar14) && (lVar21 < lVar17)) {
        iVar11 = (int)param_1->_padding_;
        uVar20 = (iVar11 - uVar19) + param_2;
        if (-1 < (int)uVar20) {
          if (*(int *)((longlong)&param_1->_padding_ + 4) < (int)uVar20) {
            Core::Private::
            ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                      (0x10,4,uVar20,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar11,
                       piVar23);
          }
          for (; (int)uVar19 < param_2; uVar19 = uVar19 + 1) {
            EVar4 = param_5->FilterMode;
            if ((EVar4 == None) ||
               (((EVar4 != DisallowAll && (EVar4 != AllowOnlyFiltered)) &&
                (EVar4 == DisallowFiltered)))) {
              fVar24 = `UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves'::__l2::
                       <lambda_2>::operator()(param_4,uVar19);
              FVar12 = `UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves'::__l2::
                       <lambda_1>::operator()(&local_res18,(int)local_58);
              iVar11 = (int)param_1->_padding_;
              if (iVar11 == *(int *)((longlong)&param_1->_padding_ + 4)) {
                iVar11 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                                   (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar23
                                   );
              }
              lVar14 = (longlong)iVar11;
              *(int *)&param_1->_padding_ = iVar11 + 1;
              lVar17 = param_1->_padding_;
              uVar7 = *(undefined8 *)FVar12;
              *(float *)(lVar17 + 8 + lVar14 * 0x10) = fVar24;
              *(undefined8 *)(lVar17 + lVar14 * 0x10) = uVar7;
              *(undefined1 *)(lVar17 + 0xc + lVar14 * 0x10) = 0;
            }
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      uVar20 = 0;
      if ((int)uVar19 < local_res18->ArrayNum) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar20 = *(uint *)((pTVar6->AllocatorInstance).Data + lVar18 + 8);
      uVar10 = 0;
      if ((int)uVar20 < pTVar6->ArrayNum) {
        uVar10 = ~uVar20 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *(longlong *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar20 * 0xc);
      uVar20 = 0;
      if ((int)local_88 < (int)*plVar1) {
        uVar20 = ~local_88 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      param_4 = local_res20;
      lVar16 = *(longlong *)(local_78 + param_5->_padding_);
      if (lVar5 == lVar16) break;
      iVar11 = (int)lVar5 - (int)lVar16;
      if (iVar11 == 0) {
        iVar11 = (int)((ulonglong)lVar5 >> 0x20) - (int)((ulonglong)lVar16 >> 0x20);
      }
      if (iVar11 < 0) {
        EVar4 = param_5->FilterMode;
        if ((EVar4 == None) ||
           (((EVar4 != DisallowAll && (EVar4 != AllowOnlyFiltered)) && (EVar4 == DisallowFiltered)))
           ) {
          fVar24 = `UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves'::__l2::<lambda_2>
                   ::operator()(local_res20,uVar19);
          iVar11 = (int)param_1->_padding_;
          piVar23 = (int *)((longlong)&param_1->_padding_ + 4);
          if (iVar11 == *piVar23) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                               (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar23);
          }
          *(int *)&param_1->_padding_ = iVar11 + 1;
          lVar15 = (longlong)iVar11;
          lVar16 = param_1->_padding_;
          *(float *)(lVar16 + 8 + lVar15 * 0x10) = fVar24;
          *(longlong *)(lVar16 + lVar15 * 0x10) = lVar5;
          *(undefined1 *)(lVar16 + 0xc + lVar15 * 0x10) = 0;
        }
        uVar19 = uVar19 + 1;
        lVar21 = lVar21 + 1;
        lVar18 = lVar18 + 0xc;
      }
      else {
        local_88 = local_88 + 1;
        lVar22 = lVar22 + 1;
        local_78 = local_78 + 0xc;
      }
    }
    bVar13 = *(byte *)(local_78 + 8 + param_5->_padding_);
    if ((bVar13 & 1) == 0) {
      EVar4 = param_5->FilterMode;
      if (EVar4 == None) {
LAB_147426f36:
        pTVar6 = local_res20->IndexedCurveNames;
        uVar20 = 0;
        if ((int)uVar19 < pTVar6->ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        piVar23 = (int *)((longlong)&param_1->_padding_ + 4);
        lVar16 = (longlong)
                 (*(int *)((pTVar6->AllocatorInstance).Data + lVar18 + 8) * param_4->NumSamples);
        fVar24 = param_4->AnimatedSamplesPtr[param_4->SampleIndex0 + lVar16];
        fVar2 = param_4->AnimatedSamplesPtr[param_4->SampleIndex1 + lVar16];
        iVar11 = (int)param_1->_padding_;
        fVar3 = param_4->InterpolationAlpha;
        if (iVar11 == *piVar23) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                             (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar23);
        }
        *(int *)&param_1->_padding_ = iVar11 + 1;
        lVar15 = (longlong)iVar11;
        lVar16 = param_1->_padding_;
        *(float *)(lVar16 + 8 + lVar15 * 0x10) = (fVar2 - fVar24) * fVar3 + fVar24;
        *(longlong *)(lVar16 + lVar15 * 0x10) = lVar5;
        *(undefined1 *)(lVar16 + 0xc + lVar15 * 0x10) = 0;
      }
      else if (EVar4 != DisallowAll) {
        if (EVar4 == AllowOnlyFiltered) {
          bVar13 = bVar13 >> 1;
        }
        else {
          if (EVar4 != DisallowFiltered) goto LAB_147427016;
          bVar13 = ~(bVar13 >> 1);
        }
        if ((bVar13 & 1) != 0) goto LAB_147426f36;
      }
    }
LAB_147427016:
    uVar19 = uVar19 + 1;
    lVar18 = lVar18 + 0xc;
    lVar21 = lVar21 + 1;
    local_88 = local_88 + 1;
    lVar22 = lVar22 + 1;
    local_78 = local_78 + 0xc;
  } while( true );
}

// BuildSortedFiltered<`UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves'::__l2::<lambda_1>,`UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 147427240

void __cdecl
UE::Anim::FCurveUtils::
BuildSortedFiltered<_UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves_::__l2::<lambda_1>,_UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,int param_2,
          <lambda_1> param_3,<lambda_2> *param_4,FCurveFilter *param_5)

{
  longlong *plVar1;
  ECurveFilterMode EVar2;
  longlong lVar3;
  TArray<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  int *piVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  FName FVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  int *piVar22;
  float fVar23;
  TArray<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_> *local_res18 [2];
  uint local_88;
  longlong local_80;
  longlong local_70;
  undefined1 local_50 [24];
  
  lVar17 = (longlong)param_2;
  local_res18[0] = param_3.IndexedCurveNames;
  if (param_5->FilterMode == DisallowAll) {
    iVar11 = *(int *)((longlong)&param_1->_padding_ + 4);
    *(undefined4 *)&param_1->_padding_ = 0;
    if (iVar11 < 0) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,
                 (int *)((longlong)&param_1->_padding_ + 4));
    }
    *(undefined1 *)&param_1->_padding_ = 0;
    return;
  }
  plVar1 = &param_5->_padding_;
  if ((char)param_5->_padding_ == '\0') {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveFilterElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveFilterElement>::FElementSortPredicate>
              ((FCurveFilterElement *)param_5->_padding_,(int)*plVar1,param_5._0_1_,
               (FElementSortPredicate)param_5._0_1_);
    *(undefined1 *)&param_5->_padding_ = 1;
  }
  iVar11 = *(int *)((longlong)&param_1->_padding_ + 4);
  piVar22 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (iVar11 < 0) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,piVar22);
  }
  *(undefined1 *)&param_1->_padding_ = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (*piVar22 < param_2) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,param_2,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               (int)param_1->_padding_,piVar22);
  }
  lVar20 = (longlong)(int)*plVar1;
  lVar13 = 0;
  uVar18 = 0;
  local_88 = 0;
  local_70 = 0;
  local_80 = 0;
  lVar21 = 0;
  do {
    while( true ) {
      pTVar4 = local_res18[0];
      piVar22 = (int *)((longlong)&param_1->_padding_ + 4);
      if (lVar17 <= lVar13) {
        if (lVar20 <= local_80) {
          return;
        }
        if ((lVar13 == lVar17) && (local_80 < lVar20)) {
          return;
        }
      }
      if ((local_80 == lVar20) && (lVar13 < lVar17)) {
        iVar11 = (int)param_1->_padding_;
        uVar19 = (iVar11 - uVar18) + param_2;
        if (-1 < (int)uVar19) {
          if (*(int *)((longlong)&param_1->_padding_ + 4) < (int)uVar19) {
            Core::Private::
            ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                      (0x10,4,uVar19,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar11,
                       piVar22);
          }
          for (; (int)uVar18 < param_2; uVar18 = uVar18 + 1) {
            EVar2 = param_5->FilterMode;
            if ((EVar2 == None) ||
               (((EVar2 != DisallowAll && (EVar2 != AllowOnlyFiltered)) &&
                (EVar2 == DisallowFiltered)))) {
              fVar23 = `UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves'::__l2::
                       <lambda_2>::operator()(param_4,uVar18);
              FVar14 = `UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves'::__l2::
                       <lambda_1>::operator()(local_res18,(int)local_50);
              iVar11 = (int)param_1->_padding_;
              if (iVar11 == *(int *)((longlong)&param_1->_padding_ + 4)) {
                iVar11 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                                   (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar22
                                   );
              }
              lVar13 = (longlong)iVar11;
              *(int *)&param_1->_padding_ = iVar11 + 1;
              lVar17 = param_1->_padding_;
              uVar7 = *(undefined8 *)FVar14;
              *(float *)(lVar17 + 8 + lVar13 * 0x10) = fVar23;
              *(undefined8 *)(lVar17 + lVar13 * 0x10) = uVar7;
              *(undefined1 *)(lVar17 + 0xc + lVar13 * 0x10) = 0;
            }
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      uVar19 = 0;
      if ((int)uVar18 < local_res18[0]->ArrayNum) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar19 = *(uint *)((pTVar4->AllocatorInstance).Data + lVar21 + 8);
      uVar10 = 0;
      if ((int)uVar19 < pTVar4->ArrayNum) {
        uVar10 = ~uVar19 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar3 = *(longlong *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar19 * 0xc);
      uVar19 = 0;
      if ((int)local_88 < (int)*plVar1) {
        uVar19 = ~local_88 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar12 = *(longlong *)(local_70 + param_5->_padding_);
      if (lVar3 == lVar12) break;
      iVar11 = (int)lVar3 - (int)lVar12;
      if (iVar11 == 0) {
        iVar11 = (int)((ulonglong)lVar3 >> 0x20) - (int)((ulonglong)lVar12 >> 0x20);
      }
      if (iVar11 < 0) {
        EVar2 = param_5->FilterMode;
        if ((EVar2 == None) ||
           (((EVar2 != DisallowAll && (EVar2 != AllowOnlyFiltered)) && (EVar2 == DisallowFiltered)))
           ) {
          fVar23 = `UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves'::__l2::<lambda_2>
                   ::operator()(param_4,uVar18);
          iVar11 = (int)param_1->_padding_;
          piVar22 = (int *)((longlong)&param_1->_padding_ + 4);
          if (iVar11 == *piVar22) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                               (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar22);
          }
          *(int *)&param_1->_padding_ = iVar11 + 1;
          lVar16 = (longlong)iVar11;
          lVar12 = param_1->_padding_;
          *(float *)(lVar12 + 8 + lVar16 * 0x10) = fVar23;
          *(longlong *)(lVar12 + lVar16 * 0x10) = lVar3;
          *(undefined1 *)(lVar12 + 0xc + lVar16 * 0x10) = 0;
        }
        uVar18 = uVar18 + 1;
        lVar13 = lVar13 + 1;
        lVar21 = lVar21 + 0xc;
      }
      else {
        local_80 = local_80 + 1;
        local_88 = local_88 + 1;
        local_70 = local_70 + 0xc;
      }
    }
    bVar15 = *(byte *)(local_70 + 8 + param_5->_padding_);
    if ((bVar15 & 1) == 0) {
      EVar2 = param_5->FilterMode;
      if (EVar2 == None) {
LAB_14742754d:
        pTVar4 = param_4->IndexedCurveNames;
        uVar19 = 0;
        if ((int)uVar18 < pTVar4->ArrayNum) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (pTVar4->AllocatorInstance).Data;
        iVar11 = *(int *)(pFVar5 + lVar21 + 8);
        bVar15 = (byte)*(undefined4 *)(pFVar5 + lVar21 + 8) & 0x1f;
        if (iVar11 < 0) {
          iVar11 = iVar11 + 0x1f;
          bVar15 = bVar15 - 0x20;
        }
        uVar19 = 1 << (bVar15 & 0x1f) & param_4->ConstantCurvesBitsetPtr[iVar11 >> 5];
        if (uVar19 == 0) {
          fVar23 = (param_4->AnimatedSamples1[*param_4->AnimatedCurveIndex] -
                   param_4->AnimatedSamples0[*param_4->AnimatedCurveIndex]) *
                   param_4->InterpolationAlpha +
                   param_4->AnimatedSamples0[*param_4->AnimatedCurveIndex];
        }
        else {
          fVar23 = param_4->ConstantSamplesPtr[*param_4->ConstantCurveIndex];
        }
        piVar22 = (int *)((longlong)&param_1->_padding_ + 4);
        lVar12 = 0x10;
        if (uVar19 == 0) {
          lVar12 = 0x18;
        }
        piVar6 = *(int **)((longlong)&param_4->IndexedCurveNames + lVar12);
        *piVar6 = *piVar6 + 1;
        iVar11 = (int)param_1->_padding_;
        if (iVar11 == *piVar22) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                             (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar22);
        }
        *(int *)&param_1->_padding_ = iVar11 + 1;
        lVar16 = (longlong)iVar11;
        lVar12 = param_1->_padding_;
        *(float *)(lVar12 + 8 + lVar16 * 0x10) = fVar23;
        *(longlong *)(lVar12 + lVar16 * 0x10) = lVar3;
        *(undefined1 *)(lVar12 + 0xc + lVar16 * 0x10) = 0;
      }
      else if (EVar2 != DisallowAll) {
        if (EVar2 == AllowOnlyFiltered) {
          bVar15 = bVar15 >> 1;
        }
        else {
          if (EVar2 != DisallowFiltered) goto LAB_147427664;
          bVar15 = ~(bVar15 >> 1);
        }
        if ((bVar15 & 1) != 0) goto LAB_14742754d;
      }
    }
LAB_147427664:
    uVar18 = uVar18 + 1;
    lVar13 = lVar13 + 1;
    local_80 = local_80 + 1;
    lVar21 = lVar21 + 0xc;
    local_88 = local_88 + 1;
    local_70 = local_70 + 0xc;
  } while( true );
}

// BuildSortedFiltered<`UE::Anim::FCurveUtils::BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'::__l5::<lambda_2>,`UE::Anim::FCurveUtils::BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'::__l5::<lambda_3>,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 147427880

void __cdecl
UE::Anim::FCurveUtils::
BuildSortedFiltered<_UE::Anim::FCurveUtils::BuildUnsorted<_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_1>,_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_2>,_UE::Anim::FCurveUtils::BuildUnsorted<_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_1>,_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_3>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (ForElementType<UE::Anim::FCurveElement> *param_1,uint param_2,longlong *param_3,
          longlong *param_4,longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  FName FVar4;
  FName FVar5;
  void *this;
  FCurveElement *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  byte bVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  int *piVar21;
  float fVar22;
  
  lVar15 = (longlong)(int)param_2;
  if ((char)param_5[3] == '\x01') {
    iVar12 = *(int *)((longlong)&param_1[1].Data + 4);
    *(undefined4 *)&param_1[1].Data = 0;
    if (iVar12 < 0) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,0,param_1,0,(int *)((longlong)&param_1[1].Data + 4));
    }
    *(undefined1 *)&param_1[2].Data = 0;
    return;
  }
  plVar7 = param_5 + 1;
  if ((char)param_5[2] == '\0') {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveFilterElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveFilterElement>::FElementSortPredicate>
              ((FCurveFilterElement *)*param_5,(int)*plVar7,param_5._0_1_,
               (FElementSortPredicate)param_5._0_1_);
    *(undefined1 *)(param_5 + 2) = 1;
  }
  iVar12 = *(int *)((longlong)&param_1[1].Data + 4);
  piVar21 = (int *)((longlong)&param_1[1].Data + 4);
  *(undefined4 *)&param_1[1].Data = 0;
  if (iVar12 < 0) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,param_1,0,piVar21);
  }
  *(undefined1 *)&param_1[2].Data = 0;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)param_2);
  }
  if (*piVar21 < (int)param_2) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,param_2,param_1,*(int *)&param_1[1].Data,piVar21);
  }
  lVar13 = (longlong)(int)*plVar7;
  uVar17 = 0;
  uVar18 = 0;
  lVar16 = 0;
  lVar19 = 0;
  lVar20 = 0;
  do {
    while( true ) {
      piVar21 = (int *)((longlong)&param_1[1].Data + 4);
      if (lVar15 <= lVar16) {
        if (lVar13 <= lVar19) {
          return;
        }
        if ((lVar16 == lVar15) && (lVar19 < lVar13)) {
          return;
        }
      }
      if ((lVar19 == lVar13) && (lVar16 < lVar15)) {
        param_2 = (*(int *)&param_1[1].Data - uVar17) + param_2;
        if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)param_2);
        }
        if (*(int *)((longlong)&param_1[1].Data + 4) < (int)param_2) {
          Core::Private::
          ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                    (0x10,4,param_2,param_1,*(int *)&param_1[1].Data,piVar21);
        }
        do {
          cVar1 = (char)param_5[3];
          if ((cVar1 == '\0') || (((cVar1 != '\x01' && (cVar1 != '\x02')) && (cVar1 == '\x03')))) {
            fVar22 = `UE::Anim::FCurveUtils::
                     BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'
                     ::__l5::<lambda_3>::operator()(param_4,uVar17);
            plVar7 = (longlong *)*param_3;
            plVar2 = (longlong *)param_3[1];
            uVar18 = 0;
            if ((int)uVar17 < (int)plVar7[1]) {
              uVar18 = ~uVar17 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            plVar2 = (longlong *)*plVar2;
            uVar18 = *(uint *)(*plVar7 + lVar16 * 4);
            uVar10 = 0;
            if ((int)uVar18 < (int)plVar2[1]) {
              uVar10 = ~uVar18 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar12 = *(int *)&param_1[1].Data;
            FVar4 = *(FName *)(*plVar2 + (longlong)(int)uVar18 * 0x90);
            if (iVar12 == *(int *)((longlong)&param_1[1].Data + 4)) {
              iVar12 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                                 (0x410,param_1,piVar21);
            }
            *(int *)&param_1[1].Data = iVar12 + 1;
            pFVar6 = param_1->Data;
            pFVar6[iVar12].Value = fVar22;
            pFVar6[iVar12].Name = FVar4;
            pFVar6[iVar12].Flags = None;
          }
          uVar17 = uVar17 + 1;
          lVar16 = lVar16 + 1;
          if (lVar15 <= lVar16) {
            return;
          }
        } while( true );
      }
      plVar2 = (longlong *)*param_3;
      plVar3 = (longlong *)param_3[1];
      uVar10 = 0;
      if ((int)uVar17 < (int)plVar2[1]) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar3 = (longlong *)*plVar3;
      uVar10 = *(uint *)(*plVar2 + lVar16 * 4);
      uVar11 = 0;
      if ((int)uVar10 < (int)plVar3[1]) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar4 = *(FName *)(*plVar3 + (longlong)(int)uVar10 * 0x90);
      uVar10 = 0;
      if ((int)uVar18 < (int)*plVar7) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar5 = *(FName *)(*param_5 + lVar20);
      if (FVar4 == FVar5) break;
      iVar12 = FVar4.ComparisonIndex.Value.Value - FVar5.ComparisonIndex.Value;
      if (iVar12 == 0) {
        iVar12 = FVar4.Number - FVar5.Number;
      }
      if (iVar12 < 0) {
        cVar1 = (char)param_5[3];
        if ((cVar1 == '\0') || (((cVar1 != '\x01' && (cVar1 != '\x02')) && (cVar1 == '\x03')))) {
          fVar22 = `UE::Anim::FCurveUtils::
                   BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'
                   ::__l5::<lambda_3>::operator()(param_4,uVar17);
          iVar12 = *(int *)&param_1[1].Data;
          piVar21 = (int *)((longlong)&param_1[1].Data + 4);
          if (iVar12 == *piVar21) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                               (0x410,param_1,piVar21);
          }
          *(int *)&param_1[1].Data = iVar12 + 1;
          pFVar6 = param_1->Data;
          pFVar6[iVar12].Value = fVar22;
          pFVar6[iVar12].Name = FVar4;
          pFVar6[iVar12].Flags = None;
        }
        uVar17 = uVar17 + 1;
        lVar16 = lVar16 + 1;
      }
      else {
        uVar18 = uVar18 + 1;
        lVar19 = lVar19 + 1;
        lVar20 = lVar20 + 0xc;
      }
    }
    bVar14 = *(byte *)(*param_5 + 8 + lVar20);
    if ((bVar14 & 1) == 0) {
      cVar1 = (char)param_5[3];
      if (cVar1 == '\0') {
LAB_147427b91:
        plVar2 = (longlong *)*param_4;
        this = (void *)param_4[1];
        uVar10 = 0;
        if ((int)uVar17 < (int)plVar2[1]) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar22 = `FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>::operator()
                           (this,*(int *)(*plVar2 + lVar16 * 4));
        iVar12 = *(int *)&param_1[1].Data;
        piVar21 = (int *)((longlong)&param_1[1].Data + 4);
        if (iVar12 == *piVar21) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                             (0x410,param_1,piVar21);
        }
        *(int *)&param_1[1].Data = iVar12 + 1;
        pFVar6 = param_1->Data;
        pFVar6[iVar12].Value = fVar22;
        pFVar6[iVar12].Name = FVar4;
        pFVar6[iVar12].Flags = None;
      }
      else if (cVar1 != '\x01') {
        if (cVar1 == '\x02') {
          bVar14 = bVar14 >> 1;
        }
        else {
          if (cVar1 != '\x03') goto LAB_147427c41;
          bVar14 = ~(bVar14 >> 1);
        }
        if ((bVar14 & 1) != 0) goto LAB_147427b91;
      }
    }
LAB_147427c41:
    uVar17 = uVar17 + 1;
    lVar16 = lVar16 + 1;
    uVar18 = uVar18 + 1;
    lVar19 = lVar19 + 1;
    lVar20 = lVar20 + 0xc;
  } while( true );
}

// CastChecked<UAnimSequence,UObject> @ 147428400

UAnimSequence * __cdecl CastChecked<UAnimSequence,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UAnimSequence>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UAnimSequence_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UAnimSequence *)param_1;
  }
  pFVar3 = GetTypeName<UAnimSequence>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UAnimationAsset,UObject> @ 1474284c0

UAnimationAsset * __cdecl CastChecked<UAnimationAsset,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UAnimationAsset>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UAnimationAsset_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UAnimationAsset *)param_1;
  }
  pFVar3 = GetTypeName<UAnimationAsset>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FAnimNotifyEventReference,FAnimNotifyEventReference,int> @ 147428580

void __cdecl
ConstructItems<FAnimNotifyEventReference,FAnimNotifyEventReference,int>
          (void *param_1,FAnimNotifyEventReference *param_2,int param_3)

{
  bool *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  TObjectPtr<UMirrorDataTable_const_> TVar3;
  TObjectPtr<UObject_const_> TVar4;
  undefined8 *puVar5;
  FAnimNotifyEvent **ppFVar6;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)((longlong)param_1 + 0x10);
    ppFVar6 = &param_2->Notify;
    do {
      puVar5[-2] = *(undefined8 *)
                    ((longlong)puVar5 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      pTVar2 = ((FSharedReferencer<1> *)(ppFVar6 + -1))->ReferenceController;
      puVar5[-1] = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar5 = *ppFVar6;
      TVar3.field0_0x0 =
           (TObjectPtr<UMirrorDataTable_const_>_u_0)
           ((TObjectPtr<UMirrorDataTable_const_>_u_0 *)(ppFVar6 + 1))->DebugPtr;
      ((TObjectPtr<UMirrorDataTable_const_>_u_0 *)(puVar5 + 1))->DebugPtr =
           (UMirrorDataTable *)TVar3.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.field0_0x0 != (UMirrorDataTable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
      }
      TVar4.field0_0x0 =
           (TObjectPtr<UObject_const_>_u_0)
           ((TObjectPtr<UObject_const_>_u_0 *)(ppFVar6 + 2))->DebugPtr;
      ((TObjectPtr<UObject_const_>_u_0 *)(puVar5 + 2))->DebugPtr = (UObject *)TVar4.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar4.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar4.field0_0x0);
      }
      *(float *)(puVar5 + 3) = *(float *)(ppFVar6 + 3);
      pbVar1 = (bool *)((longlong)ppFVar6 + 0x1c);
      ppFVar6 = ppFVar6 + 6;
      *(bool *)((longlong)puVar5 + 0x1c) = *pbVar1;
      puVar5 = puVar5 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FBoneAnimationTrack,FBoneAnimationTrack,int> @ 147428640

void __cdecl
ConstructItems<FBoneAnimationTrack,FBoneAnimationTrack,int>
          (void *param_1,FBoneAnimationTrack *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  void *pvVar4;
  FScriptContainerElement *_Src;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0x28);
    piVar6 = &(param_2->InternalTrackData).ScaleKeys.ArrayNum;
    lVar7 = (longlong)param_1 + (-0x28 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar6 + lVar7) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)piVar6 + lVar7);
      iVar3 = piVar6[-8];
      pvVar4 = *(void **)(piVar6 + -10);
      piVar5[-8] = iVar3;
      if (iVar3 == 0) {
        piVar5[-7] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar3,0,pFVar2,iVar3,piVar5 + -7);
        memcpy(pFVar2->Data,pvVar4,(longlong)iVar3 * 0xc);
      }
      piVar5[-6] = 0;
      piVar5[-5] = 0;
      iVar3 = piVar6[-4];
      pvVar4 = *(void **)(piVar6 + -6);
      piVar5[-4] = iVar3;
      if (iVar3 == 0) {
        piVar5[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,iVar3,0,(ForAnyElementType *)(piVar5 + -6),iVar3,piVar5 + -3);
        memcpy(((ForAnyElementType *)(piVar5 + -6))->Data,pvVar4,(longlong)iVar3 << 4);
      }
      piVar5[-2] = 0;
      piVar5[-1] = 0;
      iVar3 = *piVar6;
      _Src = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->
             AllocatorInstance).Data;
      *piVar5 = iVar3;
      if (iVar3 == 0) {
        piVar5[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar3,0,(ForAnyElementType *)(piVar5 + -2),iVar3,piVar5 + 1);
        memcpy(((ForAnyElementType *)(piVar5 + -2))->Data,_Src,(longlong)iVar3 * 0xc);
      }
      piVar5[2] = piVar6[2];
      piVar1 = piVar6 + 3;
      piVar6 = piVar6 + 0x10;
      *(undefined8 *)(piVar5 + 3) = *(undefined8 *)piVar1;
      piVar5 = piVar5 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FFloatCurve,FFloatCurve,int> @ 1474287e0

void __cdecl
ConstructItems<FFloatCurve,FFloatCurve,int>(void *param_1,FFloatCurve *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(longlong *)param_1 = param_2->_padding_;
    *(int *)((longlong)param_1 + 8) = (int)param_2->_padding_;
    FRichCurve::FRichCurve((FRichCurve *)((longlong)param_1 + 0x10),&param_2->FloatCurve);
    param_2 = param_2 + 1;
    param_1 = (void *)((longlong)param_1 + 0x90);
  }
  return;
}

// ConstructItems<FMontageEvaluationState,FMontageEvaluationState,int> @ 147428850

void __cdecl
ConstructItems<FMontageEvaluationState,FMontageEvaluationState,int>
          (void *param_1,FMontageEvaluationState *param_2,int param_3)

{
  undefined8 *puVar1;
  UBlendProfile **ppUVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x38);
    ppUVar2 = &param_2->ActiveBlendProfile;
    do {
      puVar1[-7] = *(undefined8 *)
                    ((longlong)param_2 + (-0x38 - (longlong)param_1) + (longlong)puVar1);
      FAlphaBlend::FAlphaBlend((FAlphaBlend *)(puVar1 + -6),(FAlphaBlend *)(ppUVar2 + -6));
      *puVar1 = *ppUVar2;
      *(float *)(puVar1 + 1) = *(float *)(ppUVar2 + 1);
      *(undefined8 *)((longlong)puVar1 + 0xc) = *(undefined8 *)((longlong)ppUVar2 + 0xc);
      *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)((longlong)ppUVar2 + 0x14);
      *(float *)(puVar1 + 3) = *(float *)(ppUVar2 + 3);
      *(bool *)((longlong)puVar1 + 0x1c) = *(bool *)((longlong)ppUVar2 + 0x1c);
      *(bool *)((longlong)puVar1 + 0x1d) = *(bool *)((longlong)ppUVar2 + 0x1d);
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0xb;
      ppUVar2 = ppUVar2 + 0xb;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNativeStateBinding,FNativeStateBinding,int> @ 1474288f0

void __cdecl
ConstructItems<FNativeStateBinding,FNativeStateBinding,int>
          (void *param_1,FNativeStateBinding *param_2,int param_3)

{
  FNativeStateBinding *pFVar1;
  TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy> *pTVar2
  ;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)((longlong)param_1 + 0x18);
    pFVar1 = param_2;
    do {
      pTVar2 = &pFVar1->NativeStateDelegate;
      *(undefined8 *)((longlong)pTVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           *(undefined8 *)((longlong)(pTVar2 + -1) + 8);
      puVar3[-2] = *(undefined8 *)((longlong)(pTVar2 + -1) + 0x10);
      puVar3[-1] = 0;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
                  *)(puVar3 + -1),pTVar2);
      pFVar1 = (FNativeStateBinding *)(pTVar2 + 1);
      puVar3 = puVar3 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNativeTransitionBinding,FNativeTransitionBinding,int> @ 147428990

void __cdecl
ConstructItems<FNativeTransitionBinding,FNativeTransitionBinding,int>
          (void *param_1,FNativeTransitionBinding *param_2,int param_3)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->NextStateName;
    pFVar2 = (FName *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)((longlong)pFVar1 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           *(undefined8 *)&pFVar1[-2].ComparisonIndex;
      pFVar2[-1] = pFVar1[-1];
      *pFVar2 = *pFVar1;
      *(undefined8 *)(pFVar2 + 1) = 0;
      pFVar2[2].ComparisonIndex = 0;
      pFVar2[2].Number = 0;
      pFVar2[3].ComparisonIndex.Value = 0;
      TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar2 + 1),
                 (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar1 + 1));
      pFVar2 = pFVar2 + 6;
      pFVar1 = pFVar1 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPoseSnapshot,FPoseSnapshot,int> @ 147428a30

void __cdecl
ConstructItems<FPoseSnapshot,FPoseSnapshot,int>(void *param_1,FPoseSnapshot *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *_Src_00;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0xc);
    piVar5 = &(param_2->LocalTransforms).ArrayNum;
    lVar6 = (longlong)param_1 + (-8 - (longlong)param_2);
    do {
      *(undefined8 *)(lVar6 + (longlong)piVar5) = 0;
      pFVar2 = (ForAnyElementType *)(lVar6 + (longlong)piVar5);
      iVar3 = *piVar5;
      _Src = (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))->
             AllocatorInstance).Data;
      piVar4[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar3,0,pFVar2,iVar3,piVar4);
        memcpy(pFVar2->Data,_Src,(longlong)iVar3 * 0x60);
      }
      piVar4[1] = 0;
      piVar4[2] = 0;
      iVar3 = piVar5[4];
      _Src_00 = *(void **)(piVar5 + 2);
      piVar4[3] = iVar3;
      if (iVar3 == 0) {
        piVar4[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,0,(ForAnyElementType *)(piVar4 + 1),iVar3,piVar4 + 4);
        memcpy(((ForAnyElementType *)(piVar4 + 1))->Data,_Src_00,(longlong)iVar3 << 3);
      }
      *(undefined8 *)(piVar4 + 5) = *(undefined8 *)(piVar5 + 6);
      *(undefined8 *)(piVar4 + 7) = *(undefined8 *)(piVar5 + 8);
      piVar1 = piVar5 + 10;
      piVar5 = piVar5 + 0xe;
      *(char *)(piVar4 + 9) = (char)*piVar1;
      piVar4 = piVar4 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FQueuedDrawDebugItem,FQueuedDrawDebugItem,int> @ 147428b80

void __cdecl
ConstructItems<FQueuedDrawDebugItem,FQueuedDrawDebugItem,int>
          (void *param_1,FQueuedDrawDebugItem *param_2,int param_3)

{
  undefined8 uVar1;
  double dVar2;
  float *pfVar3;
  FQueuedDrawDebugItem_u_8 *pFVar4;
  
  if (param_3 != 0) {
    pfVar3 = (float *)((longlong)param_1 + 8);
    pFVar4 = &param_2->field1_0x8;
    do {
      *(undefined1 *)(pfVar3 + -2) =
           *(undefined1 *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)pfVar3);
      uVar1 = *(undefined8 *)((longlong)pFVar4 + 8);
      *(undefined8 *)pfVar3 = *(undefined8 *)pFVar4;
      *(undefined8 *)(pfVar3 + 2) = uVar1;
      *(undefined8 *)(pfVar3 + 4) = *(undefined8 *)((longlong)pFVar4 + 0x10);
      *pfVar3 = (pFVar4->_s_1).Length;
      pfVar3[1] = (pFVar4->_s_1).AngleWidth;
      pfVar3[2] = (pFVar4->_s_1).AngleHeight;
      uVar1 = *(undefined8 *)((longlong)pFVar4 + 0x20);
      *(undefined8 *)(pfVar3 + 6) = *(undefined8 *)(pFVar4 + 1);
      *(undefined8 *)(pfVar3 + 8) = uVar1;
      *(undefined8 *)(pfVar3 + 10) = *(undefined8 *)((longlong)pFVar4 + 0x28);
      uVar1 = *(undefined8 *)((longlong)pFVar4 + 0x20);
      *(undefined8 *)(pfVar3 + 6) = *(undefined8 *)(pFVar4 + 1);
      *(undefined8 *)(pfVar3 + 8) = uVar1;
      *(undefined8 *)(pfVar3 + 10) = *(undefined8 *)((longlong)pFVar4 + 0x28);
      uVar1 = *(undefined8 *)((longlong)pFVar4 + 0x38);
      *(double *)(pfVar3 + 0xc) = (((TVector<double> *)(pFVar4 + 2))->field0_0x0)._s_0.X;
      *(undefined8 *)(pfVar3 + 0xe) = uVar1;
      *(undefined8 *)(pfVar3 + 0x10) = *(undefined8 *)((longlong)pFVar4 + 0x40);
      dVar2 = *(double *)((longlong)pFVar4 + 0x50);
      *(double *)(pfVar3 + 0x12) = ((TRotator<double> *)(pFVar4 + 3))->Pitch;
      *(double *)(pfVar3 + 0x14) = dVar2;
      *(double *)(pfVar3 + 0x16) = *(double *)((longlong)pFVar4 + 0x58);
      pfVar3[0x18] = pFVar4[4]._s_1.Length;
      pfVar3[0x19] = *(float *)((longlong)pFVar4 + 100);
      pfVar3[0x1a] = *(float *)((longlong)pFVar4 + 0x68);
      *(FColor_u_0 *)(pfVar3 + 0x1b) = *(FColor_u_0 *)((longlong)pFVar4 + 0x6c);
      *(bool *)(pfVar3 + 0x1c) = *(bool *)((longlong)pFVar4 + 0x70);
      pfVar3[0x1d] = *(float *)((longlong)pFVar4 + 0x74);
      pfVar3[0x1e] = pFVar4[5]._s_1.Length;
      FString::FString((FString *)(pfVar3 + 0x20),(FString *)((longlong)pFVar4 + 0x80));
      uVar1 = *(undefined8 *)((longlong)pFVar4 + 0x98);
      *(double *)(pfVar3 + 0x24) = (((TVector2<double> *)(pFVar4 + 6))->field0_0x0)._s_0.X;
      *(undefined8 *)(pfVar3 + 0x26) = uVar1;
      *(uchar *)(pfVar3 + 0x28) =
           ((TEnumAsByte<ESceneDepthPriorityGroup> *)((longlong)pFVar4 + 0xa0))->Value;
      param_3 = param_3 + -1;
      pfVar3 = pfVar3 + 0x2c;
      pFVar4 = (FQueuedDrawDebugItem_u_8 *)((longlong)pFVar4 + 0xb0);
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FTransformCurve,FTransformCurve,int> @ 147428cb0

void __cdecl
ConstructItems<FTransformCurve,FTransformCurve,int>
          (void *param_1,FTransformCurve *param_2,int param_3)

{
  FVectorCurve *this;
  FVectorCurve *pFVar1;
  
  if (param_3 != 0) {
    this = (FVectorCurve *)((longlong)param_1 + 0x1a0);
    pFVar1 = &param_2->RotationCurve;
    do {
      this[-2].FloatCurves[2].Keys.AllocatorInstance.Data =
           *(FScriptContainerElement **)
            ((longlong)param_2 + (-0x1a0 - (longlong)param_1) + (longlong)this);
      this[-2].FloatCurves[2].Keys.ArrayNum =
           *(int *)((longlong)param_2 + (-0x198 - (longlong)param_1) + (longlong)this);
      FVectorCurve::FVectorCurve(this + -1,pFVar1 + -1);
      FVectorCurve::FVectorCurve(this,pFVar1);
      FVectorCurve::FVectorCurve(this + 1,pFVar1 + 1);
      pFVar1 = (FVectorCurve *)pFVar1[3].FloatCurves;
      this = (FVectorCurve *)this[3].FloatCurves;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FBoneReference,int> @ 147429d80

void __cdecl DefaultConstructItems<FBoneReference,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0x7fffffff;
      puVar1[1] = 0xffffffff;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPoseSnapshot,int> @ 147429dc0

void __cdecl DefaultConstructItems<FPoseSnapshot,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined1 *)(lVar1 + 0x24) = 0;
      lVar1 = lVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>,int> @ 147429e00

void __cdecl
DefaultConstructItems<TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNodeDebugData::DebugItem,int> @ 147429fd0

void __cdecl DestructItems<FNodeDebugData::DebugItem,int>(DebugItem *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FNodeDebugData,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ChildNodeChain;
    do {
      DestructItems<FNodeDebugData,int>
                ((FNodeDebugData *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -2) + 8));
      }
      pTVar2 = (TArray<FNodeDebugData,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAnimNotifyEventReference,int> @ 14742a030

void __cdecl
DestructItems<FAnimNotifyEventReference,int>(FAnimNotifyEventReference *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->ContextData).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAnimatedBoneAttribute,int> @ 14742a070

void __cdecl DestructItems<FAnimatedBoneAttribute,int>(FAnimatedBoneAttribute *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->Identifier).ScriptStructPath.SubPathString;
    do {
      FAttributeCurve::~FAttributeCurve((FAttributeCurve *)(pFVar2 + 1));
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FBoneAnimationTrack,int> @ 14742a0c0

void __cdecl DestructItems<FBoneAnimationTrack,int>(FBoneAnimationTrack *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->InternalTrackData).RotKeys;
    do {
      pFVar1 = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FRawAnimSequenceTrack *)(pTVar2 + -1))->PosKeys).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNodeDebugData::FFlattenedDebugData,int> @ 14742a120

void __cdecl
DestructItems<FNodeDebugData::FFlattenedDebugData,int>(FFlattenedDebugData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->DebugLine).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FFloatCurve,int> @ 14742a160

void __cdecl DestructItems<FFloatCurve,int>(FFloatCurve *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->FloatCurve).Keys;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ((FRichCurve *)(pTVar2 + -7))->_padding_ = (longlong)&___7FIndexedCurve__6B_;
      if (*(void **)((longlong)(pTVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -2) + 8));
      }
      *(undefined4 *)(pTVar2 + -2) = 0;
      if (*(void **)((longlong)(pTVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -3) + 8));
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&((FRichCurve *)(pTVar2 + -7))->_padding_);
      pTVar2 = pTVar2 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Anim::FMessageStack::FMessageEntry,int> @ 14742a1f0

void __cdecl
DestructItems<UE::Anim::FMessageStack::FMessageEntry,int>(FMessageEntry *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Message).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNativeStateBinding,int> @ 14742a230

void __cdecl DestructItems<FNativeStateBinding,int>(FNativeStateBinding *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->NativeStateDelegate);
    param_1 = (FNativeStateBinding *)(&param_1->NativeStateDelegate + 1);
  }
  return;
}

// DestructItems<FNativeTransitionBinding,int> @ 14742a270

void __cdecl
DestructItems<FNativeTransitionBinding,int>(FNativeTransitionBinding *param_1,int param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->NativeTransitionDelegate;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
      this = this + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNodeDebugData,int> @ 14742a2b0

void __cdecl DestructItems<FNodeDebugData,int>(FNodeDebugData *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FNodeDebugData::~FNodeDebugData(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPoseSnapshot,int> @ 14742a2f0

void __cdecl DestructItems<FPoseSnapshot,int>(FPoseSnapshot *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->BoneNames).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->LocalTransforms).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FQueuedDrawDebugItem,int> @ 14742a340

void __cdecl DestructItems<FQueuedDrawDebugItem,int>(FQueuedDrawDebugItem *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Message;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FQueuedMontageBlendedInEvent,int> @ 14742a390

void __cdecl
DestructItems<FQueuedMontageBlendedInEvent,int>(FQueuedMontageBlendedInEvent *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Delegate);
    param_1 = (FQueuedMontageBlendedInEvent *)(&param_1->Delegate + 1);
  }
  return;
}

// DestructItems<FQueuedMontageBlendingOutEvent,int> @ 14742a3d0

void __cdecl
DestructItems<FQueuedMontageBlendingOutEvent,int>
          (FQueuedMontageBlendingOutEvent *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Delegate);
    param_1 = (FQueuedMontageBlendingOutEvent *)(&param_1->Delegate + 1);
  }
  return;
}

// DestructItems<FQueuedMontageEndedEvent,int> @ 14742a410

void __cdecl
DestructItems<FQueuedMontageEndedEvent,int>(FQueuedMontageEndedEvent *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Delegate);
    param_1 = (FQueuedMontageEndedEvent *)(&param_1->Delegate + 1);
  }
  return;
}

// DestructItems<FQueuedMontageSectionChangedEvent,int> @ 14742a450

void __cdecl
DestructItems<FQueuedMontageSectionChangedEvent,int>
          (FQueuedMontageSectionChangedEvent *param_1,int param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Delegate;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
      this = this + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSlotEvaluationPose,int> @ 14742a490

void __cdecl DestructItems<FSlotEvaluationPose,int>(FSlotEvaluationPose *param_1,int param_2)

{
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this;
  
  if (param_2 != 0) {
    this = (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)&param_1->Attributes
    ;
    do {
      UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
      ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(this);
      this = this + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTransformCurve,int> @ 14742a4d0

void __cdecl DestructItems<FTransformCurve,int>(FTransformCurve *param_1,int param_2)

{
  FVectorCurve *this;
  
  if (param_2 != 0) {
    this = &param_1->RotationCurve;
    do {
      FVectorCurve::~FVectorCurve(this + 1);
      FVectorCurve::~FVectorCurve(this);
      FVectorCurve::~FVectorCurve(this + -1);
      this = (FVectorCurve *)this[3].FloatCurves;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>,int> @ 14742a530

void __cdecl
DestructItems<TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>,int>
          (TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// FindByPredicate<`UAnimDataModel::FindAttribute'::__l2::<lambda_1>_> @ 14742bc10

FAnimatedBoneAttribute * __thiscall
TArray<FAnimatedBoneAttribute,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UAnimDataModel::FindAttribute_::__l2::<lambda_1>_>
          (TArray<FAnimatedBoneAttribute,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  FScriptContainerElement *pFVar1;
  FAnimatedBoneAttribute *pFVar2;
  FAnimatedBoneAttribute *pFVar3;
  
  pFVar3 = (FAnimatedBoneAttribute *)(this->AllocatorInstance).Data;
  pFVar2 = pFVar3 + this->ArrayNum;
  if (pFVar3 != pFVar2) {
    do {
      if (((((pFVar3->Identifier).Name == (param_1->AttributeIdentifier).Name) &&
           ((pFVar3->Identifier).BoneIndex == (param_1->AttributeIdentifier).BoneIndex)) &&
          ((pFVar3->Identifier).BoneName == (param_1->AttributeIdentifier).BoneName)) &&
         ((pFVar3->Identifier).ScriptStruct.field0_0x0.DebugPtr ==
          (param_1->AttributeIdentifier).ScriptStruct.field0_0x0.DebugPtr)) {
        pFVar1 = (param_1->AttributeIdentifier).ScriptStructPath.SubPathString.Data.
                 AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        return pFVar3;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar2);
  }
  pFVar1 = (param_1->AttributeIdentifier).ScriptStructPath.SubPathString.Data.AllocatorInstance.Data
  ;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (FAnimatedBoneAttribute *)0x0;
}

// GetNodeFromPropertyIndex<FAnimNode_TransitionResult> @ 14742cd80

FAnimNode_TransitionResult * __cdecl
GetNodeFromPropertyIndex<FAnimNode_TransitionResult>
          (UObject *param_1,IAnimClassInterface *param_2,int param_3)

{
  uint uVar1;
  FProperty *this;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  FAnimNode_TransitionResult *pFVar8;
  UScriptStruct *pUVar9;
  
  if (param_3 == -1) {
    return (FAnimNode_TransitionResult *)0x0;
  }
  plVar6 = (longlong *)(**(code **)((longlong)*param_2 + 0x20))(param_2);
  lVar7 = (**(code **)((longlong)*param_2 + 0x20))(param_2);
  uVar1 = (*(int *)(lVar7 + 8) - param_3) - 1;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar6[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FAnimNode_TransitionResult *)(*pcVar3)();
      return pFVar8;
    }
  }
  this = *(FProperty **)(*plVar6 + (longlong)(int)uVar1 * 8);
  pUVar9 = FAnimNode_TransitionResult::StaticStruct();
  pUVar2 = (UScriptStruct *)this[1]._padding_;
  if (pUVar2 == (UScriptStruct *)0x0) {
    bVar4 = pUVar9 == (UScriptStruct *)0x0;
  }
  else {
    bVar4 = pUVar2 == pUVar9;
  }
  if (!bVar4) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("NodeProperty->Struct == NodeType::StaticStruct()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimBlueprintGeneratedClass.h"
                       ,0x297,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FAnimNode_TransitionResult *)(*pcVar3)();
      return pFVar8;
    }
  }
  pFVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,0);
  return pFVar8;
}

// GetTypeName<UAnimSequence> @ 14742d190

FString * __cdecl GetTypeName<UAnimSequence>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UAnimSequence_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UAnimationAsset> @ 14742d1d0

FString * __cdecl GetTypeName<UAnimationAsset>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UAnimationAsset_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`UE::Anim::FCurveUtils::BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'::__l5::<lambda_1>_>_> @ 14742d210

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UE::Anim::FCurveUtils::BuildUnsorted<_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_1>,_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_static_void___cdecl_UE::Anim::FCurveUtils::BuildUnsorted<_public:_void___cdecl_FRawCurveTracks::EvaluateCurveData(FBlendedCurve_&,float)const_::_2_::<lambda_1>,_public:_void___cdecl_FRawCurveTracks::EvaluateCurveData(FBlendedCurve_&,float)const_::_2_::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>(TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>_&,int,_public:_void___cdecl_FRawCurveTracks::EvaluateCurveData(FBlendedCurve_&,float)const_::_2_::<lambda_1>,_public:_void___cdecl_FRawCurveTracks::EvaluateCurveData(FBlendedCurve_&,float)const_::_2_::<lambda_2>,UE::Anim::FCurveFilter_const_*)_::_5_::<lambda_1>_>
          param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14742d32c:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `UE::Anim::FCurveUtils::
                          BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'
                          ::__l5::<lambda_1>::operator()
                                    (param_4.Predicate,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `UE::Anim::FCurveUtils::
                        BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'
                        ::__l5::<lambda_1>::operator()
                                  (param_4.Predicate,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `UE::Anim::FCurveUtils::
              BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'
              ::__l5::<lambda_1>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `UE::Anim::FCurveUtils::
            BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'
            ::__l5::<lambda_1>::operator()(param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_14742d32c;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<FBlendSampleData,int,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,`OutputTickRecords'::__l37::<lambda_1>_>_> @ 14742d410

void __cdecl
AlgoImpl::
HeapSortInternal<FBlendSampleData,int,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,_OutputTickRecords_::__l37::<lambda_1>_>_>
          (FBlendSampleData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FBlendSampleData,_void___cdecl_OutputTickRecords(TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_>_const_&,UCanvas_*,float,int,FLinearColor,FLinearColor,FLinearColor,FDisplayDebugManager_&,bool)_::_37_::<lambda_1>_>
          param_4)

{
  FBlendSampleData *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  TObjectPtr<UAnimSequence>_u_0 TVar4;
  TObjectPtr<UAnimSequence>_u_0 TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FMarkerPair FVar8;
  FMarkerPair FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined8 uVar12;
  FMarkerPair FVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined3 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  bool bVar32;
  undefined3 uVar33;
  bool bVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  longlong lVar39;
  FBlendSampleData *pFVar40;
  int iVar41;
  int iVar42;
  FBlendSampleData *pFVar43;
  
  if (param_2 < 0) {
    bVar34 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar34) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar34 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar34) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar35 = (param_2 + -2) / 2;
  iVar36 = iVar35 * 2 + 1;
  iVar37 = iVar36;
  iVar42 = iVar35;
  do {
    while (param_2 <= iVar36) {
LAB_14742d590:
      if (iVar42 == 0) {
        iVar36 = param_2 + -1;
        lVar39 = (longlong)iVar36;
        if (0 < iVar36) {
          pFVar43 = param_1 + lVar39;
          do {
            iVar37 = pFVar43->_padding_;
            TVar4 = (pFVar43->Animation).field0_0x0;
            iVar41 = 0;
            iVar42 = param_1->SampleDataIndex;
            iVar38 = param_1->_padding_;
            TVar5 = (param_1->Animation).field0_0x0;
            fVar21 = param_1->TotalWeight;
            fVar22 = param_1->WeightRate;
            fVar27 = param_1->Time;
            fVar28 = param_1->PreviousTime;
            fVar29 = param_1->SamplePlayRate;
            fVar30 = (param_1->DeltaTimeRecord).Delta;
            fVar31 = (param_1->DeltaTimeRecord).Previous;
            bVar32 = (param_1->DeltaTimeRecord).bPreviousIsValid;
            uVar33 = *(undefined3 *)&(param_1->DeltaTimeRecord).field_0x9;
            FVar8 = (param_1->MarkerTickRecord).PreviousMarker;
            FVar9 = (param_1->MarkerTickRecord).NextMarker;
            pFVar10 = (param_1->PerBoneBlendData).AllocatorInstance.Data;
            iVar14 = (param_1->PerBoneBlendData).ArrayNum;
            iVar16 = (param_1->PerBoneBlendData).ArrayMax;
            pFVar11 = (param_1->PerBoneWeightRate).AllocatorInstance.Data;
            iVar17 = (param_1->PerBoneWeightRate).ArrayNum;
            iVar18 = (param_1->PerBoneWeightRate).ArrayMax;
            param_1->SampleDataIndex = pFVar43->SampleDataIndex;
            param_1->_padding_ = iVar37;
            (param_1->Animation).field0_0x0 = TVar4;
            fVar15 = pFVar43->WeightRate;
            fVar19 = pFVar43->Time;
            fVar20 = pFVar43->PreviousTime;
            param_1->TotalWeight = pFVar43->TotalWeight;
            param_1->WeightRate = fVar15;
            param_1->Time = fVar19;
            param_1->PreviousTime = fVar20;
            fVar15 = (pFVar43->DeltaTimeRecord).Delta;
            fVar19 = (pFVar43->DeltaTimeRecord).Previous;
            bVar34 = (pFVar43->DeltaTimeRecord).bPreviousIsValid;
            uVar26 = *(undefined3 *)&(pFVar43->DeltaTimeRecord).field_0x9;
            param_1->SamplePlayRate = pFVar43->SamplePlayRate;
            (param_1->DeltaTimeRecord).Delta = fVar15;
            (param_1->DeltaTimeRecord).Previous = fVar19;
            (param_1->DeltaTimeRecord).bPreviousIsValid = bVar34;
            *(undefined3 *)&(param_1->DeltaTimeRecord).field_0x9 = uVar26;
            FVar13 = (pFVar43->MarkerTickRecord).NextMarker;
            (param_1->MarkerTickRecord).PreviousMarker = (pFVar43->MarkerTickRecord).PreviousMarker;
            (param_1->MarkerTickRecord).NextMarker = FVar13;
            iVar37 = (pFVar43->PerBoneBlendData).ArrayNum;
            iVar35 = (pFVar43->PerBoneBlendData).ArrayMax;
            (param_1->PerBoneBlendData).AllocatorInstance.Data =
                 (pFVar43->PerBoneBlendData).AllocatorInstance.Data;
            (param_1->PerBoneBlendData).ArrayNum = iVar37;
            (param_1->PerBoneBlendData).ArrayMax = iVar35;
            iVar37 = (pFVar43->PerBoneWeightRate).ArrayNum;
            iVar35 = (pFVar43->PerBoneWeightRate).ArrayMax;
            (param_1->PerBoneWeightRate).AllocatorInstance.Data =
                 (pFVar43->PerBoneWeightRate).AllocatorInstance.Data;
            (param_1->PerBoneWeightRate).ArrayNum = iVar37;
            (param_1->PerBoneWeightRate).ArrayMax = iVar35;
            pFVar43->SampleDataIndex = iVar42;
            pFVar43->_padding_ = iVar38;
            (pFVar43->Animation).field0_0x0 = TVar5;
            pFVar43->TotalWeight = fVar21;
            pFVar43->WeightRate = fVar22;
            pFVar43->Time = fVar27;
            pFVar43->PreviousTime = fVar28;
            pFVar43->SamplePlayRate = fVar29;
            (pFVar43->DeltaTimeRecord).Delta = fVar30;
            (pFVar43->DeltaTimeRecord).Previous = fVar31;
            (pFVar43->DeltaTimeRecord).bPreviousIsValid = bVar32;
            *(undefined3 *)&(pFVar43->DeltaTimeRecord).field_0x9 = uVar33;
            (pFVar43->MarkerTickRecord).PreviousMarker = FVar8;
            (pFVar43->MarkerTickRecord).NextMarker = FVar9;
            (pFVar43->PerBoneBlendData).AllocatorInstance.Data = pFVar10;
            (pFVar43->PerBoneBlendData).ArrayNum = iVar14;
            (pFVar43->PerBoneBlendData).ArrayMax = iVar16;
            (pFVar43->PerBoneWeightRate).AllocatorInstance.Data = pFVar11;
            (pFVar43->PerBoneWeightRate).ArrayNum = iVar17;
            (pFVar43->PerBoneWeightRate).ArrayMax = iVar18;
            if (1 < iVar36) {
              do {
                iVar35 = iVar41 * 2;
                iVar37 = iVar35 + 1;
                if (iVar35 + 2 < iVar36) {
                  if (param_1[(longlong)iVar35 + 2].SampleDataIndex <
                      param_1[iVar37].SampleDataIndex) {
                    iVar37 = iVar35;
                  }
                  iVar37 = iVar37 + 1;
                }
                pFVar40 = param_1 + iVar37;
                if (pFVar40->SampleDataIndex <= param_1[iVar41].SampleDataIndex) break;
                iVar35 = pFVar40->_padding_;
                TVar4 = (pFVar40->Animation).field0_0x0;
                pFVar1 = param_1 + iVar41;
                iVar38 = pFVar1->SampleDataIndex;
                iVar14 = pFVar1->_padding_;
                TVar5 = (pFVar1->Animation).field0_0x0;
                pFVar1 = param_1 + iVar41;
                fVar19 = pFVar1->TotalWeight;
                fVar20 = pFVar1->WeightRate;
                uVar6 = *(undefined8 *)(&pFVar1->TotalWeight + 2);
                pFVar1 = param_1 + iVar41;
                fVar21 = pFVar1->SamplePlayRate;
                fVar22 = (pFVar1->DeltaTimeRecord).Delta;
                uVar7 = *(undefined8 *)(&pFVar1->SamplePlayRate + 2);
                FVar8 = param_1[iVar41].MarkerTickRecord.PreviousMarker;
                FVar9 = param_1[iVar41].MarkerTickRecord.NextMarker;
                pTVar2 = &param_1[iVar41].PerBoneBlendData;
                pFVar10 = (pTVar2->AllocatorInstance).Data;
                iVar16 = pTVar2->ArrayNum;
                iVar17 = pTVar2->ArrayMax;
                pTVar2 = &param_1[iVar41].PerBoneWeightRate;
                pFVar11 = (pTVar2->AllocatorInstance).Data;
                iVar18 = pTVar2->ArrayNum;
                iVar23 = pTVar2->ArrayMax;
                pFVar1 = param_1 + iVar41;
                pFVar1->SampleDataIndex = pFVar40->SampleDataIndex;
                pFVar1->_padding_ = iVar35;
                (pFVar1->Animation).field0_0x0 = TVar4;
                fVar15 = pFVar40->WeightRate;
                uVar12 = *(undefined8 *)&pFVar40->Time;
                pFVar1 = param_1 + iVar41;
                pFVar1->TotalWeight = pFVar40->TotalWeight;
                pFVar1->WeightRate = fVar15;
                *(undefined8 *)(&pFVar1->TotalWeight + 2) = uVar12;
                fVar15 = (pFVar40->DeltaTimeRecord).Delta;
                uVar12 = *(undefined8 *)&(pFVar40->DeltaTimeRecord).Previous;
                pFVar1 = param_1 + iVar41;
                pFVar1->SamplePlayRate = pFVar40->SamplePlayRate;
                (pFVar1->DeltaTimeRecord).Delta = fVar15;
                *(undefined8 *)(&pFVar1->SamplePlayRate + 2) = uVar12;
                FVar13 = (pFVar40->MarkerTickRecord).NextMarker;
                param_1[iVar41].MarkerTickRecord.PreviousMarker =
                     (pFVar40->MarkerTickRecord).PreviousMarker;
                param_1[iVar41].MarkerTickRecord.NextMarker = FVar13;
                iVar35 = (pFVar40->PerBoneBlendData).ArrayNum;
                iVar42 = (pFVar40->PerBoneBlendData).ArrayMax;
                pTVar2 = &param_1[iVar41].PerBoneBlendData;
                (pTVar2->AllocatorInstance).Data =
                     (pFVar40->PerBoneBlendData).AllocatorInstance.Data;
                pTVar2->ArrayNum = iVar35;
                pTVar2->ArrayMax = iVar42;
                iVar35 = (pFVar40->PerBoneWeightRate).ArrayNum;
                iVar42 = (pFVar40->PerBoneWeightRate).ArrayMax;
                pTVar2 = &param_1[iVar41].PerBoneWeightRate;
                (pTVar2->AllocatorInstance).Data =
                     (pFVar40->PerBoneWeightRate).AllocatorInstance.Data;
                pTVar2->ArrayNum = iVar35;
                pTVar2->ArrayMax = iVar42;
                pFVar40->SampleDataIndex = iVar38;
                pFVar40->_padding_ = iVar14;
                (pFVar40->Animation).field0_0x0 = TVar5;
                pFVar40->TotalWeight = fVar19;
                pFVar40->WeightRate = fVar20;
                *(undefined8 *)&pFVar40->Time = uVar6;
                pFVar40->SamplePlayRate = fVar21;
                (pFVar40->DeltaTimeRecord).Delta = fVar22;
                *(undefined8 *)&(pFVar40->DeltaTimeRecord).Previous = uVar7;
                (pFVar40->MarkerTickRecord).PreviousMarker = FVar8;
                (pFVar40->MarkerTickRecord).NextMarker = FVar9;
                (pFVar40->PerBoneBlendData).AllocatorInstance.Data = pFVar10;
                (pFVar40->PerBoneBlendData).ArrayNum = iVar16;
                (pFVar40->PerBoneBlendData).ArrayMax = iVar17;
                (pFVar40->PerBoneWeightRate).AllocatorInstance.Data = pFVar11;
                (pFVar40->PerBoneWeightRate).ArrayNum = iVar18;
                (pFVar40->PerBoneWeightRate).ArrayMax = iVar23;
                iVar41 = iVar37;
              } while (iVar37 * 2 + 1 < iVar36);
            }
            iVar36 = iVar36 + -1;
            lVar39 = lVar39 + -1;
            pFVar43 = pFVar43 + -1;
          } while (0 < lVar39);
        }
        return;
      }
      iVar35 = iVar42 + -1;
      iVar36 = iVar37 + -2;
      iVar37 = iVar36;
      iVar42 = iVar35;
    }
    iVar36 = iVar35 * 2;
    iVar38 = iVar36 + 1;
    if (iVar36 + 2 < param_2) {
      if (param_1[(longlong)iVar36 + 2].SampleDataIndex < param_1[iVar38].SampleDataIndex) {
        iVar38 = iVar36;
      }
      iVar38 = iVar38 + 1;
    }
    pFVar43 = param_1 + iVar38;
    if (pFVar43->SampleDataIndex <= param_1[iVar35].SampleDataIndex) goto LAB_14742d590;
    iVar14 = pFVar43->_padding_;
    TVar4 = (pFVar43->Animation).field0_0x0;
    iVar36 = iVar38 * 2 + 1;
    pFVar40 = param_1 + iVar35;
    iVar17 = pFVar40->SampleDataIndex;
    iVar18 = pFVar40->_padding_;
    TVar5 = (pFVar40->Animation).field0_0x0;
    pFVar40 = param_1 + iVar35;
    fVar19 = pFVar40->TotalWeight;
    fVar20 = pFVar40->WeightRate;
    uVar6 = *(undefined8 *)(&pFVar40->TotalWeight + 2);
    pFVar40 = param_1 + iVar35;
    fVar21 = pFVar40->SamplePlayRate;
    fVar22 = (pFVar40->DeltaTimeRecord).Delta;
    uVar7 = *(undefined8 *)(&pFVar40->SamplePlayRate + 2);
    FVar8 = param_1[iVar35].MarkerTickRecord.PreviousMarker;
    FVar9 = param_1[iVar35].MarkerTickRecord.NextMarker;
    pTVar2 = &param_1[iVar35].PerBoneBlendData;
    pFVar10 = (pTVar2->AllocatorInstance).Data;
    iVar41 = pTVar2->ArrayNum;
    iVar23 = pTVar2->ArrayMax;
    pTVar2 = &param_1[iVar35].PerBoneWeightRate;
    pFVar11 = (pTVar2->AllocatorInstance).Data;
    iVar24 = pTVar2->ArrayNum;
    iVar25 = pTVar2->ArrayMax;
    pFVar40 = param_1 + iVar35;
    pFVar40->SampleDataIndex = pFVar43->SampleDataIndex;
    pFVar40->_padding_ = iVar14;
    (pFVar40->Animation).field0_0x0 = TVar4;
    fVar15 = pFVar43->WeightRate;
    uVar12 = *(undefined8 *)&pFVar43->Time;
    pFVar40 = param_1 + iVar35;
    pFVar40->TotalWeight = pFVar43->TotalWeight;
    pFVar40->WeightRate = fVar15;
    *(undefined8 *)(&pFVar40->TotalWeight + 2) = uVar12;
    fVar15 = (pFVar43->DeltaTimeRecord).Delta;
    uVar12 = *(undefined8 *)&(pFVar43->DeltaTimeRecord).Previous;
    pFVar40 = param_1 + iVar35;
    pFVar40->SamplePlayRate = pFVar43->SamplePlayRate;
    (pFVar40->DeltaTimeRecord).Delta = fVar15;
    *(undefined8 *)(&pFVar40->SamplePlayRate + 2) = uVar12;
    FVar13 = (pFVar43->MarkerTickRecord).NextMarker;
    param_1[iVar35].MarkerTickRecord.PreviousMarker = (pFVar43->MarkerTickRecord).PreviousMarker;
    param_1[iVar35].MarkerTickRecord.NextMarker = FVar13;
    iVar14 = (pFVar43->PerBoneBlendData).ArrayNum;
    iVar16 = (pFVar43->PerBoneBlendData).ArrayMax;
    pTVar2 = &param_1[iVar35].PerBoneBlendData;
    (pTVar2->AllocatorInstance).Data = (pFVar43->PerBoneBlendData).AllocatorInstance.Data;
    pTVar2->ArrayNum = iVar14;
    pTVar2->ArrayMax = iVar16;
    iVar14 = (pFVar43->PerBoneWeightRate).ArrayNum;
    iVar16 = (pFVar43->PerBoneWeightRate).ArrayMax;
    pTVar2 = &param_1[iVar35].PerBoneWeightRate;
    (pTVar2->AllocatorInstance).Data = (pFVar43->PerBoneWeightRate).AllocatorInstance.Data;
    pTVar2->ArrayNum = iVar14;
    pTVar2->ArrayMax = iVar16;
    pFVar43->SampleDataIndex = iVar17;
    pFVar43->_padding_ = iVar18;
    (pFVar43->Animation).field0_0x0 = TVar5;
    pFVar43->TotalWeight = fVar19;
    pFVar43->WeightRate = fVar20;
    *(undefined8 *)&pFVar43->Time = uVar6;
    pFVar43->SamplePlayRate = fVar21;
    (pFVar43->DeltaTimeRecord).Delta = fVar22;
    *(undefined8 *)&(pFVar43->DeltaTimeRecord).Previous = uVar7;
    (pFVar43->MarkerTickRecord).PreviousMarker = FVar8;
    (pFVar43->MarkerTickRecord).NextMarker = FVar9;
    (pFVar43->PerBoneBlendData).AllocatorInstance.Data = pFVar10;
    (pFVar43->PerBoneBlendData).ArrayNum = iVar41;
    (pFVar43->PerBoneBlendData).ArrayMax = iVar23;
    (pFVar43->PerBoneWeightRate).AllocatorInstance.Data = pFVar11;
    (pFVar43->PerBoneWeightRate).ArrayNum = iVar24;
    (pFVar43->PerBoneWeightRate).ArrayMax = iVar25;
    iVar35 = iVar38;
  } while( true );
}

// HeapSortInternal<UE::Anim::FCurveElementFlags,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementFlags>::FElementSortPredicate> @ 14742d750

void __cdecl
AlgoImpl::
HeapSortInternal<UE::Anim::FCurveElementFlags,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementFlags>::FElementSortPredicate>
          (FCurveElementFlags *param_1,int param_2,FIdentityFunctor param_3,
          FElementSortPredicate param_4)

{
  FCurveElementFlags *pFVar1;
  FCurveElementFlags *pFVar2;
  FName FVar3;
  code *pcVar4;
  undefined3 uVar5;
  ECurveElementFlags EVar6;
  undefined3 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FCurveElementFlags *pFVar14;
  longlong lVar15;
  int iVar16;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar11 = iVar9 * 2 + 1;
  iVar12 = iVar11;
  iVar16 = iVar9;
  do {
    while (param_2 <= iVar11) {
LAB_14742d883:
      if (iVar16 == 0) {
        iVar11 = param_2 + -1;
        lVar15 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar14 = param_1 + lVar15;
          do {
            FVar3 = param_1->Name;
            EVar6 = param_1->Flags;
            uVar7 = *(undefined3 *)&param_1->field_0x9;
            param_1->Name = pFVar14->Name;
            uVar5 = *(undefined3 *)&pFVar14->field_0x9;
            param_1->Flags = pFVar14->Flags;
            *(undefined3 *)&param_1->field_0x9 = uVar5;
            pFVar14->Name = FVar3;
            pFVar14->Flags = EVar6;
            *(undefined3 *)&pFVar14->field_0x9 = uVar7;
            iVar12 = 0;
            if (1 < iVar11) {
              do {
                iVar16 = iVar12 * 2;
                iVar9 = iVar16 + 1;
                if (iVar16 + 2 < iVar11) {
                  iVar13 = param_1[(longlong)iVar16 + 2].Name.ComparisonIndex.Value -
                           param_1[(longlong)iVar16 + 1].Name.ComparisonIndex.Value;
                  if (iVar13 == 0) {
                    iVar13 = param_1[(longlong)iVar16 + 2].Name.Number -
                             param_1[(longlong)iVar16 + 1].Name.Number;
                  }
                  if (iVar13 < 0) {
                    iVar9 = iVar16;
                  }
                  iVar9 = iVar9 + 1;
                }
                pFVar1 = param_1 + iVar9;
                pFVar2 = param_1 + iVar12;
                iVar12 = param_1[iVar12].Name.ComparisonIndex.Value -
                         (pFVar1->Name).ComparisonIndex.Value;
                if (iVar12 == 0) {
                  iVar12 = (pFVar2->Name).Number - (pFVar1->Name).Number;
                }
                if (-1 < iVar12) break;
                FVar3 = pFVar2->Name;
                EVar6 = pFVar2->Flags;
                uVar7 = *(undefined3 *)&pFVar2->field_0x9;
                pFVar2->Name = pFVar1->Name;
                uVar5 = *(undefined3 *)&pFVar1->field_0x9;
                pFVar2->Flags = pFVar1->Flags;
                *(undefined3 *)&pFVar2->field_0x9 = uVar5;
                pFVar1->Name = FVar3;
                pFVar1->Flags = EVar6;
                *(undefined3 *)&pFVar1->field_0x9 = uVar7;
                iVar12 = iVar9;
              } while (iVar9 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar15 = lVar15 + -1;
            pFVar14 = pFVar14 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar9 = iVar16 + -1;
      iVar11 = iVar12 + -2;
      iVar12 = iVar11;
      iVar16 = iVar9;
    }
    iVar11 = iVar9 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      iVar10 = param_1[(longlong)iVar11 + 2].Name.ComparisonIndex.Value -
               param_1[(longlong)iVar11 + 1].Name.ComparisonIndex.Value;
      if (iVar10 == 0) {
        iVar10 = param_1[(longlong)iVar11 + 2].Name.Number -
                 param_1[(longlong)iVar11 + 1].Name.Number;
      }
      if (iVar10 < 0) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar14 = param_1 + iVar13;
    pFVar1 = param_1 + iVar9;
    iVar11 = param_1[iVar9].Name.ComparisonIndex.Value - (pFVar14->Name).ComparisonIndex.Value;
    if (iVar11 == 0) {
      iVar11 = (pFVar1->Name).Number - (pFVar14->Name).Number;
    }
    if (-1 < iVar11) goto LAB_14742d883;
    FVar3 = pFVar1->Name;
    EVar6 = pFVar1->Flags;
    uVar7 = *(undefined3 *)&pFVar1->field_0x9;
    pFVar1->Name = pFVar14->Name;
    uVar5 = *(undefined3 *)&pFVar14->field_0x9;
    pFVar1->Flags = pFVar14->Flags;
    *(undefined3 *)&pFVar1->field_0x9 = uVar5;
    iVar11 = iVar13 * 2 + 1;
    pFVar14->Name = FVar3;
    pFVar14->Flags = EVar6;
    *(undefined3 *)&pFVar14->field_0x9 = uVar7;
    iVar9 = iVar13;
  } while( true );
}

// InternalConstructor<UAnimCompress_BitwiseCompressOnly> @ 14742d9b0

void __cdecl InternalConstructor<UAnimCompress_BitwiseCompressOnly>(FObjectInitializer *param_1)

{
  UAnimCompress *this;
  
  this = (UAnimCompress *)param_1->Obj;
  if (this != (UAnimCompress *)0x0) {
    UAnimCompress::UAnimCompress(this,param_1);
    this->_padding_ = (longlong)&___7UAnimCompress_BitwiseCompressOnly__6B_;
    FString::operator=((FString *)&this->_padding_,L"Bitwise Compress Only");
    return;
  }
  return;
}

// InternalConstructor<UAnimCompress_LeastDestructive> @ 14742da00

void __cdecl InternalConstructor<UAnimCompress_LeastDestructive>(FObjectInitializer *param_1)

{
  UAnimCompress *this;
  
  this = (UAnimCompress *)param_1->Obj;
  if (this != (UAnimCompress *)0x0) {
    UAnimCompress::UAnimCompress(this,param_1);
    this->_padding_ = (longlong)&___7UAnimCompress_BitwiseCompressOnly__6B_;
    FString::operator=((FString *)&this->_padding_,L"Bitwise Compress Only");
    this->_padding_ = (longlong)&___7UAnimCompress_LeastDestructive__6B_;
    FString::operator=((FString *)&this->_padding_,L"Least Destructive");
    this->TranslationCompressionFormat = '\0';
    this->RotationCompressionFormat = '\x01';
  }
  return;
}

// InternalConstructor<UAnimCompress_PerTrackCompression> @ 14742da70

void __cdecl InternalConstructor<UAnimCompress_PerTrackCompression>(FObjectInitializer *param_1)

{
  if ((UAnimCompress_PerTrackCompression *)param_1->Obj != (UAnimCompress_PerTrackCompression *)0x0)
  {
    UAnimCompress_PerTrackCompression::UAnimCompress_PerTrackCompression
              ((UAnimCompress_PerTrackCompression *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAnimCompress_RemoveEverySecondKey> @ 14742da90

void __cdecl InternalConstructor<UAnimCompress_RemoveEverySecondKey>(FObjectInitializer *param_1)

{
  UAnimCompress *this;
  
  this = (UAnimCompress *)param_1->Obj;
  if (this != (UAnimCompress *)0x0) {
    UAnimCompress::UAnimCompress(this,param_1);
    this->_padding_ = (longlong)&___7UAnimCompress_RemoveEverySecondKey__6B_;
    FString::operator=((FString *)&this->_padding_,L"Remove Every Second Key");
    *(undefined4 *)&this[1]._padding_ = 10;
  }
  return;
}

// InternalConstructor<UAnimCompress_RemoveLinearKeys> @ 14742dae0

void __cdecl InternalConstructor<UAnimCompress_RemoveLinearKeys>(FObjectInitializer *param_1)

{
  if ((UAnimCompress_RemoveLinearKeys *)param_1->Obj != (UAnimCompress_RemoveLinearKeys *)0x0) {
    UAnimCompress_RemoveLinearKeys::UAnimCompress_RemoveLinearKeys
              ((UAnimCompress_RemoveLinearKeys *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAnimCompress_RemoveTrivialKeys> @ 14742db00

void __cdecl InternalConstructor<UAnimCompress_RemoveTrivialKeys>(FObjectInitializer *param_1)

{
  UAnimCompress *this;
  
  this = (UAnimCompress *)param_1->Obj;
  if (this != (UAnimCompress *)0x0) {
    UAnimCompress::UAnimCompress(this,param_1);
    this->_padding_ = (longlong)&___7UAnimCompress_RemoveTrivialKeys__6B_;
    FString::operator=((FString *)&this->_padding_,L"Remove Trivial Keys");
    *(undefined4 *)&this[1]._padding_ = 0x38d1b717;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x399d4952;
    *(undefined4 *)&this[1]._padding_ = 0x358637bd;
  }
  return;
}

// InternalConstructor<UAnimCurveCompressionCodec> @ 14742db60

void __cdecl InternalConstructor<UAnimCurveCompressionCodec>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimCurveCompressionCodec__6B_;
  }
  return;
}

// InternalConstructor<UAnimCurveCompressionCodec_CompressedRichCurve> @ 14742db90

void __cdecl
InternalConstructor<UAnimCurveCompressionCodec_CompressedRichCurve>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimCurveCompressionCodec_CompressedRichCurve__6B_;
  }
  return;
}

// InternalConstructor<UAnimCurveCompressionCodec_UniformIndexable> @ 14742dbc0

void __cdecl
InternalConstructor<UAnimCurveCompressionCodec_UniformIndexable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimCurveCompressionCodec_UniformIndexable__6B_;
  }
  return;
}

// InternalConstructor<UAnimCurveCompressionCodec_UniformlySampled> @ 14742dbf0

void __cdecl
InternalConstructor<UAnimCurveCompressionCodec_UniformlySampled>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimCurveCompressionCodec_UniformlySampled__6B_;
  }
  return;
}

// InternalConstructor<UAnimCurveCompressionSettings> @ 14742dc20

void __cdecl InternalConstructor<UAnimCurveCompressionSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimCurveCompressionSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UAnimDataModel> @ 14742dc60

void __cdecl InternalConstructor<UAnimDataModel>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[2].field_0x18 = 2;
    *(undefined ***)this = &UAnimDataModel::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UAnimDataModel::_vftable__for__IAnimationDataModel__;
    *(undefined4 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined1 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0xc = 60000;
    *(undefined4 *)&this[3].field_0x10 = 1;
  }
  return;
}

// InternalConstructor<UAnimInstance> @ 14742dd20

void __cdecl InternalConstructor<UAnimInstance>(FObjectInitializer *param_1)

{
  if ((UAnimInstance *)param_1->Obj != (UAnimInstance *)0x0) {
    UAnimInstance::UAnimInstance((UAnimInstance *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAnimationDataController> @ 14742dd40

void __cdecl InternalConstructor<UAnimationDataController>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAnimationDataController__6B_;
  }
  return;
}

// InternalConstructor<UAnimationDataModel> @ 14742dd70

void __cdecl InternalConstructor<UAnimationDataModel>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAnimationDataModel__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAnimCompress_BitwiseCompressOnly> @ 14742dda0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimCompress_BitwiseCompressOnly>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimCompress *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimCompress_BitwiseCompressOnly::GetPrivateStaticClass();
  this = (UAnimCompress *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimCompress *)0x0) {
    UAnimCompress::UAnimCompress(this,param_1);
    this->_padding_ = (longlong)&___7UAnimCompress_BitwiseCompressOnly__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimCompress_LeastDestructive> @ 14742de50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimCompress_LeastDestructive>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimCompress *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimCompress_LeastDestructive::GetPrivateStaticClass();
  this = (UAnimCompress *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimCompress *)0x0) {
    UAnimCompress::UAnimCompress(this,param_1);
    this->_padding_ = (longlong)&___7UAnimCompress_LeastDestructive__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimCompress_PerTrackCompression> @ 14742df00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimCompress_PerTrackCompression>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimCompress *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimCompress_PerTrackCompression::GetPrivateStaticClass();
  this = (UAnimCompress *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimCompress *)0x0) {
    UAnimCompress::UAnimCompress(this,param_1);
    this->_padding_ = (longlong)&___7UAnimCompress_PerTrackCompression__6B_;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimCompress_RemoveEverySecondKey> @ 14742dfd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimCompress_RemoveEverySecondKey>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimCompress *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimCompress_RemoveEverySecondKey::GetPrivateStaticClass();
  this = (UAnimCompress *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimCompress *)0x0) {
    UAnimCompress::UAnimCompress(this,param_1);
    this->_padding_ = (longlong)&___7UAnimCompress_RemoveEverySecondKey__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimCompress_RemoveLinearKeys> @ 14742e080

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimCompress_RemoveLinearKeys>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimCompress *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimCompress_RemoveLinearKeys::GetPrivateStaticClass();
  this = (UAnimCompress *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimCompress *)0x0) {
    UAnimCompress::UAnimCompress(this,param_1);
    this->_padding_ = (longlong)&___7UAnimCompress_RemoveLinearKeys__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimCompress_RemoveTrivialKeys> @ 14742e130

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimCompress_RemoveTrivialKeys>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimCompress *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimCompress_RemoveTrivialKeys::GetPrivateStaticClass();
  this = (UAnimCompress *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimCompress *)0x0) {
    UAnimCompress::UAnimCompress(this,param_1);
    this->_padding_ = (longlong)&___7UAnimCompress_RemoveTrivialKeys__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec> @ 14742e1e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimCurveCompressionCodec::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimCurveCompressionCodec__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_CompressedRichCurve> @ 14742e290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_CompressedRichCurve>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimCurveCompressionCodec_CompressedRichCurve::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimCurveCompressionCodec_CompressedRichCurve__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_UniformIndexable> @ 14742e340

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_UniformIndexable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimCurveCompressionCodec_UniformIndexable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimCurveCompressionCodec_UniformIndexable__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_UniformlySampled> @ 14742e3f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_UniformlySampled>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimCurveCompressionCodec_UniformlySampled::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimCurveCompressionCodec_UniformlySampled__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimCurveCompressionSettings> @ 14742e4a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimCurveCompressionSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimCurveCompressionSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimCurveCompressionSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimDataModel> @ 14742e550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimDataModel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimDataModel::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UAnimDataModel::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UAnimDataModel::_vftable__for__IAnimationDataModel__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 2;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0xc = 60000;
    *(undefined4 *)&pUVar1[3].field_0x10 = 1;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimInstance> @ 14742e680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimInstance *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimInstance::GetPrivateStaticClass();
  pUVar3 = (UAnimInstance *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UAnimInstance *)0x0) {
    pUVar3 = UAnimInstance::UAnimInstance(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimationDataController> @ 14742e720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimationDataController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimationDataController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimationDataController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimationDataModel> @ 14742e7d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimationDataModel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimationDataModel::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimationDataModel__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// Intersection<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementFlags,`FAnimInstanceProxy::UpdateCurvesToEvaluationContext'::__l2::<lambda_2>_> @ 14742e880

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Intersection<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementFlags,_FAnimInstanceProxy::UpdateCurvesToEvaluationContext_::__l2::<lambda_2>_>
          (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *param_1,
          TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementFlags> *param_2,
          <lambda_2> param_3)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  FName *pFVar9;
  FName *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  FIdentityFunctor local_res10;
  undefined1 local_88 [8];
  longlong local_80;
  int *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  FName *local_58;
  FName *local_50;
  FName *local_48;
  FName *local_40;
  
  piVar8 = &(param_1->Elements).ArrayNum;
  local_res10 = SUB81(param_2,0);
  local_78 = piVar8;
  if (param_1->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::FElementSortPredicate>
              ((FCurveElement *)(param_1->Elements).AllocatorInstance.Data,*piVar8,local_res10,
               (FElementSortPredicate)local_res10);
    param_1->bSorted = true;
  }
  if (param_2->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElementFlags,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementFlags>::FElementSortPredicate>
              ((FCurveElementFlags *)(param_2->Elements).AllocatorInstance.Data,
               (param_2->Elements).ArrayNum,local_res10,(FElementSortPredicate)local_res10);
    param_2->bSorted = true;
  }
  local_68 = (longlong)*piVar8;
  lVar11 = 0;
  local_60 = (longlong)(param_2->Elements).ArrayNum;
  uVar12 = 0;
  uVar13 = 0;
  lVar7 = 0;
  lVar14 = 0;
  local_80 = 0;
  lVar15 = 0;
  local_70 = 0;
  do {
    while( true ) {
      if ((((lVar14 == local_68) && (lVar7 < local_60)) ||
          ((lVar7 == local_60 && (lVar14 < local_68)))) ||
         ((lVar14 == local_68 && (lVar7 == local_60)))) {
        return;
      }
      uVar5 = 0;
      if ((int)uVar12 < *piVar8) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         lVar11 = local_80, bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (FName *)((param_1->Elements).AllocatorInstance.Data + lVar15);
      uVar5 = 0;
      if ((int)uVar13 < (param_2->Elements).ArrayNum) {
        uVar5 = ~uVar13 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         lVar11 = local_80, bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar1 = *pFVar9;
      pFVar10 = (FName *)((param_2->Elements).AllocatorInstance.Data + lVar11);
      FVar2 = *pFVar10;
      if (FVar1 != FVar2) break;
      if ((((byte)pFVar10[1].ComparisonIndex.Value | (byte)pFVar9[1].Number) & 2) != 0) {
        local_50 = pFVar9 + 1;
        local_58 = pFVar9;
        TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_const_&,float_const_&>_>
                  ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                    *)((param_3.__this)->AnimationCurves + 2),
                   (TPairInitializer<FName_const_&,float_const_&> *)&stack0x00000020,
                   (bool *)&local_58);
        lVar11 = local_80;
      }
      if ((((byte)pFVar10[1].ComparisonIndex.Value | (byte)pFVar9[1].Number) & 1) != 0) {
        FVar1 = *pFVar9;
        uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
        uVar5 = FVar1.Number + uVar5;
        if (*(int *)&((param_3.__this)->MaterialParametersToClear).Elements.field_0x8 !=
            *(int *)&((param_3.__this)->MaterialParametersToClear).Elements.field_0x34) {
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::RemoveImpl<FName>
                    (&(param_3.__this)->MaterialParametersToClear,uVar5,pFVar9);
        }
        local_40 = pFVar9 + 1;
        local_48 = pFVar9;
        TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
        EmplaceByHash<TPairInitializer<FName_const_&,float_const_&>_>
                  ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                    *)((param_3.__this)->AnimationCurves + 1),(uint)local_88,
                   (TPairInitializer<FName_const_&,float_const_&> *)(ulonglong)uVar5,
                   (bool *)&local_48);
        lVar11 = local_80;
        lVar15 = local_70;
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 1;
      lVar15 = lVar15 + 0x10;
      local_70 = lVar15;
LAB_14742eaee:
      uVar13 = uVar13 + 1;
      lVar7 = lVar7 + 1;
      lVar11 = lVar11 + 0xc;
      piVar8 = local_78;
      local_80 = lVar11;
    }
    iVar6 = FVar1.ComparisonIndex.Value.Value - FVar2.ComparisonIndex.Value;
    if (iVar6 == 0) {
      iVar6 = FVar1.Number - FVar2.Number;
    }
    if (-1 < iVar6) goto LAB_14742eaee;
    uVar12 = uVar12 + 1;
    lVar14 = lVar14 + 1;
    lVar15 = lVar15 + 0x10;
    piVar8 = local_78;
    local_70 = lVar15;
  } while( true );
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`UE::Anim::FCurveUtils::BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'::__l5::<lambda_1>_>_> @ 14742eb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UE::Anim::FCurveUtils::BuildUnsorted<_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_1>,_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_static_void___cdecl_UE::Anim::FCurveUtils::BuildUnsorted<_public:_void___cdecl_FRawCurveTracks::EvaluateCurveData(FBlendedCurve_&,float)const_::_2_::<lambda_1>,_public:_void___cdecl_FRawCurveTracks::EvaluateCurveData(FBlendedCurve_&,float)const_::_2_::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>(TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>_&,int,_public:_void___cdecl_FRawCurveTracks::EvaluateCurveData(FBlendedCurve_&,float)const_::_2_::<lambda_1>,_public:_void___cdecl_FRawCurveTracks::EvaluateCurveData(FBlendedCurve_&,float)const_::_2_::<lambda_2>,UE::Anim::FCurveFilter_const_*)_::_5_::<lambda_1>_>
          param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppiVar7 = &local_348;
    do {
      piVar4 = ppiVar7[1];
      piVar5 = *ppiVar7;
      local_358 = ppiVar7[2];
      iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
      piVar10 = piVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14742ec20:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar8 = piVar4 + 1;
          iVar1 = piVar10[iVar3 >> 1];
          piVar10[iVar3 >> 1] = *piVar10;
          *piVar10 = iVar1;
          piVar5 = piVar10;
LAB_14742ec50:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x00014742ec59;
          goto LAB_14742ec70;
        }
        for (; piVar8 = piVar10, piVar5 = piVar10, piVar10 < piVar4; piVar4 = piVar4 + -1) {
          while (piVar5 = piVar5 + 1, piVar5 <= piVar4) {
            bVar2 = `UE::Anim::FCurveUtils::
                    BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'
                    ::__l5::<lambda_1>::operator()(param_4.Predicate,*piVar8,*piVar5);
            if (bVar2) {
              piVar8 = piVar5;
            }
          }
          iVar6 = *piVar8;
          *piVar8 = *piVar4;
          *piVar4 = iVar6;
        }
        goto LAB_14742ed34;
      }
LAB_14742ed23:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UE::Anim::FCurveUtils::BuildUnsorted<_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_1>,_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>_>_>
                (piVar5,iVar3,param_3,param_4);
LAB_14742ed34:
      ppiVar7 = ppiVar7 + -3;
    } while (&local_348 <= ppiVar7);
  }
  return;
code_r0x00014742ec59:
  bVar2 = `UE::Anim::FCurveUtils::
          BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'
          ::__l5::<lambda_1>::operator()(param_4.Predicate,*piVar10,*piVar5);
  if (!bVar2) goto LAB_14742ec50;
LAB_14742ec70:
  do {
    piVar9 = piVar8;
    piVar8 = piVar9 + -1;
    if (piVar8 <= piVar10) break;
    bVar2 = `UE::Anim::FCurveUtils::
            BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'
            ::__l5::<lambda_1>::operator()(param_4.Predicate,*piVar8,*piVar10);
  } while (!bVar2);
  if (piVar5 <= piVar8) {
    iVar3 = *piVar5;
    *piVar5 = *piVar8;
    *piVar8 = iVar3;
    goto LAB_14742ec50;
  }
  iVar3 = *piVar10;
  iVar6 = iVar6 + -1;
  *piVar10 = *piVar8;
  *piVar8 = iVar3;
  if ((longlong)((longlong)piVar8 + (-4 - (longlong)piVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar4 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar4) {
      *ppiVar7 = piVar5;
      ppiVar7[1] = piVar4;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar8 <= piVar10 + 1) goto LAB_14742ed34;
    piVar4 = piVar9 + -2;
    piVar5 = piVar10;
  }
  else {
    if (piVar10 + 1 < piVar8) {
      *ppiVar7 = piVar10;
      ppiVar7[1] = piVar9 + -2;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar4 <= piVar5) goto LAB_14742ed34;
  }
  iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar10 = piVar5;
  if (iVar6 == 0) goto LAB_14742ed23;
  goto LAB_14742ec20;
}

// IntroSortInternal<FBlendSampleData,int,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,`OutputTickRecords'::__l37::<lambda_1>_>_> @ 14742edf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FBlendSampleData,int,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,_OutputTickRecords_::__l37::<lambda_1>_>_>
          (FBlendSampleData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FBlendSampleData,_void___cdecl_OutputTickRecords(TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_>_const_&,UCanvas_*,float,int,FLinearColor,FLinearColor,FLinearColor,FDisplayDebugManager_&,bool)_::_37_::<lambda_1>_>
          param_4)

{
  FBlendSampleData *pFVar1;
  TObjectPtr<UAnimSequence>_u_0 TVar2;
  TObjectPtr<UAnimSequence>_u_0 TVar3;
  FMarkerPair FVar4;
  FMarkerPair FVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FMarkerPair FVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  undefined3 uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  bool bVar25;
  undefined3 uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  int iVar32;
  FBlendSampleData *pFVar33;
  FBlendSampleData *pFVar34;
  FBlendSampleData *pFVar35;
  FBlendSampleData *pFVar36;
  FBlendSampleData *pFVar37;
  FBlendSampleData *pFVar38;
  FBlendSampleData **ppFVar39;
  float fVar40;
  undefined1 auStack_398 [48];
  FBlendSampleData *local_368;
  FBlendSampleData *local_358;
  FBlendSampleData *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
  if (1 < param_2) {
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar40 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar40;
    memset(local_340,0,0x2e8);
    ppFVar39 = &local_358;
    do {
      pFVar33 = ppFVar39[1];
      pFVar38 = *ppFVar39;
      pFVar1 = ppFVar39[2];
      local_368._0_4_ = (int)pFVar1;
      iVar32 = (int)(((longlong)pFVar33 - (longlong)pFVar38) / 0x60) + 1;
      pFVar37 = pFVar38;
      if ((int)local_368 != 0) {
LAB_14742eed0:
        if (8 < iVar32) {
          iVar11 = pFVar37->_padding_;
          TVar2 = (pFVar37->Animation).field0_0x0;
          pFVar35 = pFVar33 + 1;
          pFVar38 = pFVar37 + iVar32 / 2;
          iVar16 = pFVar38->SampleDataIndex;
          iVar17 = pFVar38->_padding_;
          TVar3 = (pFVar38->Animation).field0_0x0;
          fVar18 = pFVar38->TotalWeight;
          fVar19 = pFVar38->WeightRate;
          fVar20 = pFVar38->Time;
          fVar21 = pFVar38->PreviousTime;
          fVar22 = pFVar38->SamplePlayRate;
          fVar23 = (pFVar38->DeltaTimeRecord).Delta;
          fVar24 = (pFVar38->DeltaTimeRecord).Previous;
          bVar25 = (pFVar38->DeltaTimeRecord).bPreviousIsValid;
          uVar26 = *(undefined3 *)&(pFVar38->DeltaTimeRecord).field_0x9;
          FVar4 = (pFVar38->MarkerTickRecord).PreviousMarker;
          FVar5 = (pFVar38->MarkerTickRecord).NextMarker;
          pFVar6 = (pFVar38->PerBoneBlendData).AllocatorInstance.Data;
          iVar27 = (pFVar38->PerBoneBlendData).ArrayNum;
          iVar28 = (pFVar38->PerBoneBlendData).ArrayMax;
          pFVar7 = (pFVar38->PerBoneWeightRate).AllocatorInstance.Data;
          iVar29 = (pFVar38->PerBoneWeightRate).ArrayNum;
          iVar30 = (pFVar38->PerBoneWeightRate).ArrayMax;
          pFVar38->SampleDataIndex = pFVar37->SampleDataIndex;
          pFVar38->_padding_ = iVar11;
          (pFVar38->Animation).field0_0x0 = TVar2;
          fVar40 = pFVar37->WeightRate;
          fVar12 = pFVar37->Time;
          fVar13 = pFVar37->PreviousTime;
          pFVar38->TotalWeight = pFVar37->TotalWeight;
          pFVar38->WeightRate = fVar40;
          pFVar38->Time = fVar12;
          pFVar38->PreviousTime = fVar13;
          fVar40 = (pFVar37->DeltaTimeRecord).Delta;
          fVar12 = (pFVar37->DeltaTimeRecord).Previous;
          bVar14 = (pFVar37->DeltaTimeRecord).bPreviousIsValid;
          uVar15 = *(undefined3 *)&(pFVar37->DeltaTimeRecord).field_0x9;
          pFVar38->SamplePlayRate = pFVar37->SamplePlayRate;
          (pFVar38->DeltaTimeRecord).Delta = fVar40;
          (pFVar38->DeltaTimeRecord).Previous = fVar12;
          (pFVar38->DeltaTimeRecord).bPreviousIsValid = bVar14;
          *(undefined3 *)&(pFVar38->DeltaTimeRecord).field_0x9 = uVar15;
          FVar8 = (pFVar37->MarkerTickRecord).NextMarker;
          (pFVar38->MarkerTickRecord).PreviousMarker = (pFVar37->MarkerTickRecord).PreviousMarker;
          (pFVar38->MarkerTickRecord).NextMarker = FVar8;
          iVar32 = (pFVar37->PerBoneBlendData).ArrayNum;
          iVar11 = (pFVar37->PerBoneBlendData).ArrayMax;
          (pFVar38->PerBoneBlendData).AllocatorInstance.Data =
               (pFVar37->PerBoneBlendData).AllocatorInstance.Data;
          (pFVar38->PerBoneBlendData).ArrayNum = iVar32;
          (pFVar38->PerBoneBlendData).ArrayMax = iVar11;
          iVar32 = (pFVar37->PerBoneWeightRate).ArrayNum;
          iVar11 = (pFVar37->PerBoneWeightRate).ArrayMax;
          (pFVar38->PerBoneWeightRate).AllocatorInstance.Data =
               (pFVar37->PerBoneWeightRate).AllocatorInstance.Data;
          (pFVar38->PerBoneWeightRate).ArrayNum = iVar32;
          (pFVar38->PerBoneWeightRate).ArrayMax = iVar11;
          pFVar37->SampleDataIndex = iVar16;
          pFVar37->_padding_ = iVar17;
          (pFVar37->Animation).field0_0x0 = TVar3;
          pFVar37->TotalWeight = fVar18;
          pFVar37->WeightRate = fVar19;
          pFVar37->Time = fVar20;
          pFVar37->PreviousTime = fVar21;
          pFVar37->SamplePlayRate = fVar22;
          (pFVar37->DeltaTimeRecord).Delta = fVar23;
          (pFVar37->DeltaTimeRecord).Previous = fVar24;
          (pFVar37->DeltaTimeRecord).bPreviousIsValid = bVar25;
          *(undefined3 *)&(pFVar37->DeltaTimeRecord).field_0x9 = uVar26;
          (pFVar37->MarkerTickRecord).PreviousMarker = FVar4;
          (pFVar37->MarkerTickRecord).NextMarker = FVar5;
          (pFVar37->PerBoneBlendData).AllocatorInstance.Data = pFVar6;
          (pFVar37->PerBoneBlendData).ArrayNum = iVar27;
          (pFVar37->PerBoneBlendData).ArrayMax = iVar28;
          (pFVar37->PerBoneWeightRate).AllocatorInstance.Data = pFVar7;
          (pFVar37->PerBoneWeightRate).ArrayNum = iVar29;
          (pFVar37->PerBoneWeightRate).ArrayMax = iVar30;
          pFVar38 = pFVar37;
LAB_14742ef60:
          pFVar34 = pFVar38;
          pFVar38 = pFVar34 + 1;
          if (pFVar38 <= pFVar33) goto code_r0x00014742ef69;
          goto LAB_14742ef71;
        }
        for (; pFVar38 = pFVar37, pFVar1 = pFVar37, pFVar37 < pFVar33; pFVar33 = pFVar33 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar33) {
            if (pFVar38->SampleDataIndex < pFVar1->SampleDataIndex) {
              pFVar38 = pFVar1;
            }
          }
          iVar16 = pFVar38->SampleDataIndex;
          iVar17 = pFVar38->_padding_;
          TVar2 = (pFVar38->Animation).field0_0x0;
          fVar18 = pFVar38->TotalWeight;
          fVar19 = pFVar38->WeightRate;
          fVar20 = pFVar38->Time;
          fVar21 = pFVar38->PreviousTime;
          fVar22 = pFVar38->SamplePlayRate;
          fVar23 = (pFVar38->DeltaTimeRecord).Delta;
          fVar24 = (pFVar38->DeltaTimeRecord).Previous;
          bVar25 = (pFVar38->DeltaTimeRecord).bPreviousIsValid;
          uVar26 = *(undefined3 *)&(pFVar38->DeltaTimeRecord).field_0x9;
          iVar32 = pFVar33->_padding_;
          TVar3 = (pFVar33->Animation).field0_0x0;
          FVar4 = (pFVar38->MarkerTickRecord).PreviousMarker;
          FVar5 = (pFVar38->MarkerTickRecord).NextMarker;
          pFVar6 = (pFVar38->PerBoneBlendData).AllocatorInstance.Data;
          iVar27 = (pFVar38->PerBoneBlendData).ArrayNum;
          iVar28 = (pFVar38->PerBoneBlendData).ArrayMax;
          pFVar7 = (pFVar38->PerBoneWeightRate).AllocatorInstance.Data;
          iVar29 = (pFVar38->PerBoneWeightRate).ArrayNum;
          iVar30 = (pFVar38->PerBoneWeightRate).ArrayMax;
          pFVar38->SampleDataIndex = pFVar33->SampleDataIndex;
          pFVar38->_padding_ = iVar32;
          (pFVar38->Animation).field0_0x0 = TVar3;
          fVar40 = pFVar33->WeightRate;
          fVar12 = pFVar33->Time;
          fVar13 = pFVar33->PreviousTime;
          pFVar38->TotalWeight = pFVar33->TotalWeight;
          pFVar38->WeightRate = fVar40;
          pFVar38->Time = fVar12;
          pFVar38->PreviousTime = fVar13;
          fVar40 = (pFVar33->DeltaTimeRecord).Delta;
          fVar12 = (pFVar33->DeltaTimeRecord).Previous;
          bVar14 = (pFVar33->DeltaTimeRecord).bPreviousIsValid;
          uVar15 = *(undefined3 *)&(pFVar33->DeltaTimeRecord).field_0x9;
          pFVar38->SamplePlayRate = pFVar33->SamplePlayRate;
          (pFVar38->DeltaTimeRecord).Delta = fVar40;
          (pFVar38->DeltaTimeRecord).Previous = fVar12;
          (pFVar38->DeltaTimeRecord).bPreviousIsValid = bVar14;
          *(undefined3 *)&(pFVar38->DeltaTimeRecord).field_0x9 = uVar15;
          FVar8 = (pFVar33->MarkerTickRecord).NextMarker;
          (pFVar38->MarkerTickRecord).PreviousMarker = (pFVar33->MarkerTickRecord).PreviousMarker;
          (pFVar38->MarkerTickRecord).NextMarker = FVar8;
          iVar32 = (pFVar33->PerBoneBlendData).ArrayNum;
          iVar11 = (pFVar33->PerBoneBlendData).ArrayMax;
          (pFVar38->PerBoneBlendData).AllocatorInstance.Data =
               (pFVar33->PerBoneBlendData).AllocatorInstance.Data;
          (pFVar38->PerBoneBlendData).ArrayNum = iVar32;
          (pFVar38->PerBoneBlendData).ArrayMax = iVar11;
          iVar32 = (pFVar33->PerBoneWeightRate).ArrayNum;
          iVar11 = (pFVar33->PerBoneWeightRate).ArrayMax;
          (pFVar38->PerBoneWeightRate).AllocatorInstance.Data =
               (pFVar33->PerBoneWeightRate).AllocatorInstance.Data;
          (pFVar38->PerBoneWeightRate).ArrayNum = iVar32;
          (pFVar38->PerBoneWeightRate).ArrayMax = iVar11;
          pFVar33->SampleDataIndex = iVar16;
          pFVar33->_padding_ = iVar17;
          (pFVar33->Animation).field0_0x0 = TVar2;
          pFVar33->TotalWeight = fVar18;
          pFVar33->WeightRate = fVar19;
          pFVar33->Time = fVar20;
          pFVar33->PreviousTime = fVar21;
          pFVar33->SamplePlayRate = fVar22;
          (pFVar33->DeltaTimeRecord).Delta = fVar23;
          (pFVar33->DeltaTimeRecord).Previous = fVar24;
          (pFVar33->DeltaTimeRecord).bPreviousIsValid = bVar25;
          *(undefined3 *)&(pFVar33->DeltaTimeRecord).field_0x9 = uVar26;
          (pFVar33->MarkerTickRecord).PreviousMarker = FVar4;
          (pFVar33->MarkerTickRecord).NextMarker = FVar5;
          (pFVar33->PerBoneBlendData).AllocatorInstance.Data = pFVar6;
          (pFVar33->PerBoneBlendData).ArrayNum = iVar27;
          (pFVar33->PerBoneBlendData).ArrayMax = iVar28;
          (pFVar33->PerBoneWeightRate).AllocatorInstance.Data = pFVar7;
          (pFVar33->PerBoneWeightRate).ArrayNum = iVar29;
          (pFVar33->PerBoneWeightRate).ArrayMax = iVar30;
        }
        goto LAB_14742f12c;
      }
LAB_14742f11d:
      local_368 = pFVar1;
      HeapSortInternal<FBlendSampleData,int,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,_OutputTickRecords_::__l37::<lambda_1>_>_>
                (pFVar38,iVar32,param_3,param_4);
LAB_14742f12c:
      ppFVar39 = ppFVar39 + -3;
    } while (&local_358 <= ppFVar39);
  }
  return;
code_r0x00014742ef69:
  if (pFVar38->SampleDataIndex <= pFVar37->SampleDataIndex) goto LAB_14742ef60;
LAB_14742ef71:
  do {
    pFVar36 = pFVar35;
    pFVar35 = pFVar36 + -1;
    if (pFVar35 <= pFVar37) break;
  } while (pFVar37->SampleDataIndex <= pFVar35->SampleDataIndex);
  uVar9 = pFVar35->SampleDataIndex;
  uVar10 = pFVar35->_padding_;
  TVar2 = pFVar36[-1].Animation.field0_0x0;
  if (pFVar38 <= pFVar35) {
    iVar16 = pFVar38->SampleDataIndex;
    iVar17 = pFVar38->_padding_;
    TVar3 = pFVar34[1].Animation.field0_0x0;
    fVar18 = pFVar34[1].TotalWeight;
    fVar19 = pFVar34[1].WeightRate;
    fVar20 = pFVar34[1].Time;
    fVar21 = pFVar34[1].PreviousTime;
    fVar22 = pFVar34[1].SamplePlayRate;
    fVar23 = pFVar34[1].DeltaTimeRecord.Delta;
    fVar24 = pFVar34[1].DeltaTimeRecord.Previous;
    bVar25 = pFVar34[1].DeltaTimeRecord.bPreviousIsValid;
    uVar26 = *(undefined3 *)&pFVar34[1].DeltaTimeRecord.field_0x9;
    FVar4 = pFVar34[1].MarkerTickRecord.PreviousMarker;
    FVar5 = pFVar34[1].MarkerTickRecord.NextMarker;
    pFVar6 = pFVar34[1].PerBoneBlendData.AllocatorInstance.Data;
    iVar27 = pFVar34[1].PerBoneBlendData.ArrayNum;
    iVar28 = pFVar34[1].PerBoneBlendData.ArrayMax;
    pFVar7 = pFVar34[1].PerBoneWeightRate.AllocatorInstance.Data;
    iVar29 = pFVar34[1].PerBoneWeightRate.ArrayNum;
    iVar30 = pFVar34[1].PerBoneWeightRate.ArrayMax;
    pFVar38->SampleDataIndex = uVar9;
    pFVar38->_padding_ = uVar10;
    pFVar34[1].Animation.field0_0x0 = TVar2;
    fVar40 = pFVar36[-1].WeightRate;
    fVar12 = pFVar36[-1].Time;
    fVar13 = pFVar36[-1].PreviousTime;
    pFVar34[1].TotalWeight = pFVar36[-1].TotalWeight;
    pFVar34[1].WeightRate = fVar40;
    pFVar34[1].Time = fVar12;
    pFVar34[1].PreviousTime = fVar13;
    fVar40 = pFVar36[-1].DeltaTimeRecord.Delta;
    fVar12 = pFVar36[-1].DeltaTimeRecord.Previous;
    bVar14 = pFVar36[-1].DeltaTimeRecord.bPreviousIsValid;
    uVar15 = *(undefined3 *)&pFVar36[-1].DeltaTimeRecord.field_0x9;
    pFVar34[1].SamplePlayRate = pFVar36[-1].SamplePlayRate;
    pFVar34[1].DeltaTimeRecord.Delta = fVar40;
    pFVar34[1].DeltaTimeRecord.Previous = fVar12;
    pFVar34[1].DeltaTimeRecord.bPreviousIsValid = bVar14;
    *(undefined3 *)&pFVar34[1].DeltaTimeRecord.field_0x9 = uVar15;
    FVar8 = pFVar36[-1].MarkerTickRecord.NextMarker;
    pFVar34[1].MarkerTickRecord.PreviousMarker = pFVar36[-1].MarkerTickRecord.PreviousMarker;
    pFVar34[1].MarkerTickRecord.NextMarker = FVar8;
    iVar32 = pFVar36[-1].PerBoneBlendData.ArrayNum;
    iVar11 = pFVar36[-1].PerBoneBlendData.ArrayMax;
    pFVar34[1].PerBoneBlendData.AllocatorInstance.Data =
         pFVar36[-1].PerBoneBlendData.AllocatorInstance.Data;
    pFVar34[1].PerBoneBlendData.ArrayNum = iVar32;
    pFVar34[1].PerBoneBlendData.ArrayMax = iVar11;
    iVar32 = pFVar36[-1].PerBoneWeightRate.ArrayNum;
    iVar11 = pFVar36[-1].PerBoneWeightRate.ArrayMax;
    pFVar34[1].PerBoneWeightRate.AllocatorInstance.Data =
         pFVar36[-1].PerBoneWeightRate.AllocatorInstance.Data;
    pFVar34[1].PerBoneWeightRate.ArrayNum = iVar32;
    pFVar34[1].PerBoneWeightRate.ArrayMax = iVar11;
    pFVar35->SampleDataIndex = iVar16;
    pFVar35->_padding_ = iVar17;
    pFVar36[-1].Animation.field0_0x0 = TVar3;
    pFVar36[-1].TotalWeight = fVar18;
    pFVar36[-1].WeightRate = fVar19;
    pFVar36[-1].Time = fVar20;
    pFVar36[-1].PreviousTime = fVar21;
    pFVar36[-1].SamplePlayRate = fVar22;
    pFVar36[-1].DeltaTimeRecord.Delta = fVar23;
    pFVar36[-1].DeltaTimeRecord.Previous = fVar24;
    pFVar36[-1].DeltaTimeRecord.bPreviousIsValid = bVar25;
    *(undefined3 *)&pFVar36[-1].DeltaTimeRecord.field_0x9 = uVar26;
    pFVar36[-1].MarkerTickRecord.PreviousMarker = FVar4;
    pFVar36[-1].MarkerTickRecord.NextMarker = FVar5;
    pFVar36[-1].PerBoneBlendData.AllocatorInstance.Data = pFVar6;
    pFVar36[-1].PerBoneBlendData.ArrayNum = iVar27;
    pFVar36[-1].PerBoneBlendData.ArrayMax = iVar28;
    pFVar36[-1].PerBoneWeightRate.AllocatorInstance.Data = pFVar7;
    pFVar36[-1].PerBoneWeightRate.ArrayNum = iVar29;
    pFVar36[-1].PerBoneWeightRate.ArrayMax = iVar30;
    goto LAB_14742ef60;
  }
  iVar16 = pFVar37->SampleDataIndex;
  iVar17 = pFVar37->_padding_;
  TVar3 = (pFVar37->Animation).field0_0x0;
  fVar18 = pFVar37->TotalWeight;
  fVar19 = pFVar37->WeightRate;
  fVar20 = pFVar37->Time;
  fVar21 = pFVar37->PreviousTime;
  local_368._0_4_ = (int)local_368 + -1;
  fVar22 = pFVar37->SamplePlayRate;
  fVar23 = (pFVar37->DeltaTimeRecord).Delta;
  fVar24 = (pFVar37->DeltaTimeRecord).Previous;
  bVar25 = (pFVar37->DeltaTimeRecord).bPreviousIsValid;
  uVar26 = *(undefined3 *)&(pFVar37->DeltaTimeRecord).field_0x9;
  lVar31 = (longlong)pFVar35 + (-0x60 - (longlong)pFVar37);
  FVar4 = (pFVar37->MarkerTickRecord).PreviousMarker;
  FVar5 = (pFVar37->MarkerTickRecord).NextMarker;
  pFVar6 = (pFVar37->PerBoneBlendData).AllocatorInstance.Data;
  iVar27 = (pFVar37->PerBoneBlendData).ArrayNum;
  iVar28 = (pFVar37->PerBoneBlendData).ArrayMax;
  pFVar7 = (pFVar37->PerBoneWeightRate).AllocatorInstance.Data;
  iVar29 = (pFVar37->PerBoneWeightRate).ArrayNum;
  iVar30 = (pFVar37->PerBoneWeightRate).ArrayMax;
  pFVar37->SampleDataIndex = uVar9;
  pFVar37->_padding_ = uVar10;
  (pFVar37->Animation).field0_0x0 = TVar2;
  fVar40 = pFVar36[-1].WeightRate;
  fVar12 = pFVar36[-1].Time;
  fVar13 = pFVar36[-1].PreviousTime;
  lVar31 = lVar31 / 6 + (lVar31 >> 0x3f);
  pFVar37->TotalWeight = pFVar36[-1].TotalWeight;
  pFVar37->WeightRate = fVar40;
  pFVar37->Time = fVar12;
  pFVar37->PreviousTime = fVar13;
  fVar40 = pFVar36[-1].DeltaTimeRecord.Delta;
  fVar12 = pFVar36[-1].DeltaTimeRecord.Previous;
  bVar14 = pFVar36[-1].DeltaTimeRecord.bPreviousIsValid;
  uVar15 = *(undefined3 *)&pFVar36[-1].DeltaTimeRecord.field_0x9;
  pFVar37->SamplePlayRate = pFVar36[-1].SamplePlayRate;
  (pFVar37->DeltaTimeRecord).Delta = fVar40;
  (pFVar37->DeltaTimeRecord).Previous = fVar12;
  (pFVar37->DeltaTimeRecord).bPreviousIsValid = bVar14;
  *(undefined3 *)&(pFVar37->DeltaTimeRecord).field_0x9 = uVar15;
  FVar8 = pFVar36[-1].MarkerTickRecord.NextMarker;
  (pFVar37->MarkerTickRecord).PreviousMarker = pFVar36[-1].MarkerTickRecord.PreviousMarker;
  (pFVar37->MarkerTickRecord).NextMarker = FVar8;
  iVar32 = pFVar36[-1].PerBoneBlendData.ArrayNum;
  iVar11 = pFVar36[-1].PerBoneBlendData.ArrayMax;
  (pFVar37->PerBoneBlendData).AllocatorInstance.Data =
       pFVar36[-1].PerBoneBlendData.AllocatorInstance.Data;
  (pFVar37->PerBoneBlendData).ArrayNum = iVar32;
  (pFVar37->PerBoneBlendData).ArrayMax = iVar11;
  iVar32 = pFVar36[-1].PerBoneWeightRate.ArrayNum;
  iVar11 = pFVar36[-1].PerBoneWeightRate.ArrayMax;
  (pFVar37->PerBoneWeightRate).AllocatorInstance.Data =
       pFVar36[-1].PerBoneWeightRate.AllocatorInstance.Data;
  (pFVar37->PerBoneWeightRate).ArrayNum = iVar32;
  (pFVar37->PerBoneWeightRate).ArrayMax = iVar11;
  pFVar35->SampleDataIndex = iVar16;
  pFVar35->_padding_ = iVar17;
  pFVar36[-1].Animation.field0_0x0 = TVar3;
  pFVar36[-1].TotalWeight = fVar18;
  pFVar36[-1].WeightRate = fVar19;
  pFVar36[-1].Time = fVar20;
  pFVar36[-1].PreviousTime = fVar21;
  pFVar36[-1].SamplePlayRate = fVar22;
  pFVar36[-1].DeltaTimeRecord.Delta = fVar23;
  pFVar36[-1].DeltaTimeRecord.Previous = fVar24;
  pFVar36[-1].DeltaTimeRecord.bPreviousIsValid = bVar25;
  *(undefined3 *)&pFVar36[-1].DeltaTimeRecord.field_0x9 = uVar26;
  pFVar36[-1].MarkerTickRecord.PreviousMarker = FVar4;
  pFVar36[-1].MarkerTickRecord.NextMarker = FVar5;
  pFVar36[-1].PerBoneBlendData.AllocatorInstance.Data = pFVar6;
  pFVar36[-1].PerBoneBlendData.ArrayNum = iVar27;
  pFVar36[-1].PerBoneBlendData.ArrayMax = iVar28;
  pFVar36[-1].PerBoneWeightRate.AllocatorInstance.Data = pFVar7;
  pFVar36[-1].PerBoneWeightRate.ArrayNum = iVar29;
  pFVar36[-1].PerBoneWeightRate.ArrayMax = iVar30;
  if ((lVar31 >> 4) - (lVar31 >> 0x3f) < ((longlong)pFVar33 - (longlong)pFVar38) / 0x60) {
    if (pFVar38 < pFVar33) {
      *ppFVar39 = pFVar38;
      ppFVar39[1] = pFVar33;
      *(int *)(ppFVar39 + 2) = (int)local_368;
      ppFVar39 = ppFVar39 + 3;
    }
    if (pFVar35 <= pFVar37 + 1) goto LAB_14742f12c;
    pFVar33 = pFVar36 + -2;
    pFVar38 = pFVar37;
  }
  else {
    if (pFVar37 + 1 < pFVar35) {
      *ppFVar39 = pFVar37;
      ppFVar39[1] = pFVar36 + -2;
      *(int *)(ppFVar39 + 2) = (int)local_368;
      ppFVar39 = ppFVar39 + 3;
    }
    if (pFVar33 <= pFVar38) goto LAB_14742f12c;
  }
  iVar32 = (int)(((longlong)pFVar33 - (longlong)pFVar38) / 0x60) + 1;
  pFVar37 = pFVar38;
  if ((int)local_368 == 0) goto LAB_14742f11d;
  goto LAB_14742eed0;
}

// IntroSortInternal<UE::Anim::FCurveElementFlags,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementFlags>::FElementSortPredicate> @ 14742f230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::Anim::FCurveElementFlags,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementFlags>::FElementSortPredicate>
          (FCurveElementFlags *param_1,int param_2,FIdentityFunctor param_3,
          FElementSortPredicate param_4)

{
  FCurveElementFlags *pFVar1;
  FName FVar2;
  undefined3 uVar3;
  ECurveElementFlags EVar4;
  undefined3 uVar5;
  longlong lVar6;
  int iVar7;
  FCurveElementFlags *pFVar8;
  FCurveElementFlags *pFVar9;
  FCurveElementFlags *pFVar10;
  FCurveElementFlags *pFVar11;
  FCurveElementFlags *pFVar12;
  FCurveElementFlags *pFVar13;
  FCurveElementFlags **ppFVar14;
  float fVar15;
  undefined1 auStack_388 [48];
  FCurveElementFlags *local_358;
  FCurveElementFlags *local_348;
  FCurveElementFlags *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar15;
    memset(local_330,0,0x2e8);
    ppFVar14 = &local_348;
    do {
      pFVar8 = ppFVar14[1];
      pFVar13 = *ppFVar14;
      pFVar1 = ppFVar14[2];
      local_358._0_4_ = (int)pFVar1;
      iVar7 = (int)(((longlong)pFVar8 - (longlong)pFVar13) / 0xc) + 1;
      pFVar12 = pFVar13;
      if ((int)local_358 != 0) {
LAB_14742f310:
        if (8 < iVar7) {
          pFVar10 = pFVar8 + 1;
          iVar7 = iVar7 / 2;
          FVar2 = pFVar12[iVar7].Name;
          EVar4 = pFVar12[iVar7].Flags;
          uVar5 = *(undefined3 *)&pFVar12[iVar7].field_0x9;
          pFVar12[iVar7].Name = pFVar12->Name;
          uVar3 = *(undefined3 *)&pFVar12->field_0x9;
          pFVar12[iVar7].Flags = pFVar12->Flags;
          *(undefined3 *)&pFVar12[iVar7].field_0x9 = uVar3;
          pFVar12->Name = FVar2;
          pFVar12->Flags = EVar4;
          *(undefined3 *)&pFVar12->field_0x9 = uVar5;
          pFVar13 = pFVar12;
LAB_14742f356:
          pFVar9 = pFVar13;
          pFVar13 = pFVar9 + 1;
          if (pFVar13 <= pFVar8) goto code_r0x00014742f35f;
          goto LAB_14742f376;
        }
        for (; pFVar13 = pFVar12, pFVar1 = pFVar12, pFVar12 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            iVar7 = (pFVar13->Name).ComparisonIndex.Value - (pFVar1->Name).ComparisonIndex.Value;
            if (iVar7 == 0) {
              iVar7 = (pFVar13->Name).Number - (pFVar1->Name).Number;
            }
            if (iVar7 < 0) {
              pFVar13 = pFVar1;
            }
          }
          FVar2 = pFVar13->Name;
          EVar4 = pFVar13->Flags;
          uVar5 = *(undefined3 *)&pFVar13->field_0x9;
          pFVar13->Name = pFVar8->Name;
          uVar3 = *(undefined3 *)&pFVar8->field_0x9;
          pFVar13->Flags = pFVar8->Flags;
          *(undefined3 *)&pFVar13->field_0x9 = uVar3;
          pFVar8->Name = FVar2;
          pFVar8->Flags = EVar4;
          *(undefined3 *)&pFVar8->field_0x9 = uVar5;
        }
        goto LAB_14742f49a;
      }
LAB_14742f48a:
      local_358 = pFVar1;
      HeapSortInternal<UE::Anim::FCurveElementFlags,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementFlags>::FElementSortPredicate>
                (pFVar13,iVar7,param_3,param_4);
LAB_14742f49a:
      ppFVar14 = ppFVar14 + -3;
    } while (&local_348 <= ppFVar14);
  }
  return;
code_r0x00014742f35f:
  iVar7 = (pFVar12->Name).ComparisonIndex.Value - (pFVar13->Name).ComparisonIndex.Value;
  if (iVar7 == 0) {
    iVar7 = (pFVar12->Name).Number - pFVar9[1].Name.Number;
  }
  if (-1 < iVar7) goto LAB_14742f356;
LAB_14742f376:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= pFVar12) break;
    iVar7 = (pFVar10->Name).ComparisonIndex.Value - (pFVar12->Name).ComparisonIndex.Value;
    if (iVar7 == 0) {
      iVar7 = pFVar11[-1].Name.Number - (pFVar12->Name).Number;
    }
  } while (-1 < iVar7);
  if (pFVar13 <= pFVar10) {
    FVar2 = pFVar13->Name;
    EVar4 = pFVar9[1].Flags;
    uVar5 = *(undefined3 *)&pFVar9[1].field_0x9;
    pFVar13->Name = pFVar10->Name;
    uVar3 = *(undefined3 *)&pFVar11[-1].field_0x9;
    pFVar9[1].Flags = pFVar11[-1].Flags;
    *(undefined3 *)&pFVar9[1].field_0x9 = uVar3;
    pFVar10->Name = FVar2;
    pFVar11[-1].Flags = EVar4;
    *(undefined3 *)&pFVar11[-1].field_0x9 = uVar5;
    goto LAB_14742f356;
  }
  EVar4 = pFVar12->Flags;
  uVar5 = *(undefined3 *)&pFVar12->field_0x9;
  local_358._0_4_ = (int)local_358 + -1;
  FVar2 = pFVar12->Name;
  pFVar12->Name = pFVar10->Name;
  uVar3 = *(undefined3 *)&pFVar11[-1].field_0x9;
  pFVar12->Flags = pFVar11[-1].Flags;
  *(undefined3 *)&pFVar12->field_0x9 = uVar3;
  pFVar10->Name = FVar2;
  pFVar11[-1].Flags = EVar4;
  *(undefined3 *)&pFVar11[-1].field_0x9 = uVar5;
  lVar6 = (longlong)pFVar10 + (-0xc - (longlong)pFVar12);
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  if ((lVar6 >> 1) - (lVar6 >> 0x3f) < ((longlong)pFVar8 - (longlong)pFVar13) / 0xc) {
    if (pFVar13 < pFVar8) {
      *ppFVar14 = pFVar13;
      ppFVar14[1] = pFVar8;
      *(int *)(ppFVar14 + 2) = (int)local_358;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar10 <= pFVar12 + 1) goto LAB_14742f49a;
    pFVar8 = pFVar11 + -2;
    pFVar13 = pFVar12;
  }
  else {
    if (pFVar12 + 1 < pFVar10) {
      *ppFVar14 = pFVar12;
      ppFVar14[1] = pFVar11 + -2;
      *(int *)(ppFVar14 + 2) = (int)local_358;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar8 <= pFVar13) goto LAB_14742f49a;
  }
  iVar7 = (int)(((longlong)pFVar8 - (longlong)pFVar13) / 0xc) + 1;
  pFVar12 = pFVar13;
  if ((int)local_358 == 0) goto LAB_14742f48a;
  goto LAB_14742f310;
}

// IsObjectPtrEqual<UAnimMontage,UAnimMontage_const_*,0> @ 14742f5b0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UAnimMontage,UAnimMontage_const_*,0>
          (TObjectPtr<UAnimMontage> *param_1,UAnimMontage **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UAnimMontage *)0x0) {
    return *param_2 == (UAnimMontage *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UAnimSequenceBase,UAnimSequenceBase_const_*,0> @ 14742f5d0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UAnimSequenceBase,UAnimSequenceBase_const_*,0>
          (TObjectPtr<UAnimSequenceBase> *param_1,UAnimSequenceBase **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UAnimSequenceBase *)0x0) {
    return *param_2 == (UAnimSequenceBase *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// LowerBoundInternal<TTuple<FName,UMeshComponent::FMaterialParameterCache>_const_,int,FName,TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 14742f5f0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FName,UMeshComponent::FMaterialParameterCache>_const_,int,FName,TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TTuple<FName,UMeshComponent::FMaterialParameterCache> *param_1,int param_2,FName *param_3
          ,FKeyForward param_4,FNameFastLess param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      iVar4 = *(int *)(param_1 + iVar1) - (param_3->ComparisonIndex).Value;
      if (iVar4 == 0) {
        iVar4 = *(int *)&param_1[iVar1].field_0x4 - param_3->Number;
      }
      if (iVar4 < 0) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// MakeShared<FBoneContainer,1> @ 14742f660

TSharedRef<FBoneContainer,1> * __cdecl
MakeShared<FBoneContainer,1>(TSharedRef<FBoneContainer,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FBoneContainer,1> *pTVar4;
  
  pTVar3 = operator_new(0x168);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FBoneContainer *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFBoneContainer___00_SharedPointerInternals__6B_;
    FBoneContainer::FBoneContainer((FBoneContainer *)(pTVar3 + 1));
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FBoneContainer *)(pTVar3 + 1);
    if ((FBoneContainer *)(pTVar3 + 1) == (FBoneContainer *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FBoneContainer,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UAnimInstance> @ 14742f710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAnimInstance * __cdecl
NewObject<UAnimInstance>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UAnimInstance *pUVar2;
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
  pUVar1 = UAnimInstance::StaticClass();
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
  pUVar2 = (UAnimInstance *)
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

// StaticEnum<enum_EAnimAssetCurveFlags> @ 147430820

UEnum * __cdecl StaticEnum<enum_EAnimAssetCurveFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimAssetCurveFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimAssetCurveFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimAssetCurveFlags,(UObject *)pUVar1,
                       L"EAnimAssetCurveFlags");
  }
  return Z_Registration_Info_UEnum_EAnimAssetCurveFlags.OuterSingleton;
}

// StaticEnum<enum_EAnimCurveType> @ 147430860

UEnum * __cdecl StaticEnum<enum_EAnimCurveType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimCurveType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimCurveType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimCurveType,(UObject *)pUVar1,L"EAnimCurveType");
  }
  return Z_Registration_Info_UEnum_EAnimCurveType.OuterSingleton;
}

// StaticEnum<enum_EAnimExecutionContextConversionResult> @ 1474308a0

UEnum * __cdecl StaticEnum<enum_EAnimExecutionContextConversionResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult,
                       (UObject *)pUVar1,L"EAnimExecutionContextConversionResult");
  }
  return Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.OuterSingleton;
}

// StaticEnum<enum_EMontagePlayReturnType> @ 1474308e0

UEnum * __cdecl StaticEnum<enum_EMontagePlayReturnType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMontagePlayReturnType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMontagePlayReturnType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMontagePlayReturnType,(UObject *)pUVar1,
                       L"EMontagePlayReturnType");
  }
  return Z_Registration_Info_UEnum_EMontagePlayReturnType.OuterSingleton;
}

// StaticEnum<enum_ERawCurveTrackTypes> @ 147430920

UEnum * __cdecl StaticEnum<enum_ERawCurveTrackTypes>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERawCurveTrackTypes.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERawCurveTrackTypes.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERawCurveTrackTypes,(UObject *)pUVar1,
                       L"ERawCurveTrackTypes");
  }
  return Z_Registration_Info_UEnum_ERawCurveTrackTypes.OuterSingleton;
}

// StaticEnum<enum_EDrawDebugItemType::Type> @ 147430960

UEnum * __cdecl StaticEnum<enum_EDrawDebugItemType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDrawDebugItemType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDrawDebugItemType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDrawDebugItemType,(UObject *)pUVar1,
                       L"EDrawDebugItemType");
  }
  return Z_Registration_Info_UEnum_EDrawDebugItemType.OuterSingleton;
}

// ~TFunction_OwnedObject<`UAnimInstance::InitializeAnimation'::__l14::<lambda_1>,0,0> @ 147435940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAnimInstance::InitializeAnimation'::__l14::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UAnimInstance::InitializeAnimation_::__l14::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAnimInstance::InitializeAnimation'::`14'::<lambda_1>,0,0>::_vftable_
  ;
  return;
}

// operator<< @ 14743a460

FArchive * __cdecl operator<<(FArchive *param_1,FBoneContainer *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this;
  int *piVar1;
  uint uVar2;
  FArchive *pFVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  
  this = &param_2->BoneSwitchArray;
  pFVar3 = TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>
                     (param_1,&param_2->BoneIndicesArray);
  piVar1 = (int *)**(undefined8 **)&pFVar3->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar3->field_0x8)[1] < piVar1 + 1) {
    piVar1 = &(param_2->BoneSwitchArray).NumBits;
    if ((pFVar3->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar3,(uint *)piVar1);
    }
  }
  else {
    (param_2->BoneSwitchArray).NumBits = *piVar1;
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 4;
  }
  if ((pFVar3->field_0x28 & 1) != 0) {
    uVar2 = (param_2->BoneSwitchArray).NumBits + 0x1fU >> 5;
    uVar5 = 4;
    if (4 < uVar2) {
      uVar5 = uVar2;
    }
    (param_2->BoneSwitchArray).MaxBits = uVar5 << 5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(this,0);
  }
  FVar4 = (param_2->BoneSwitchArray).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)this;
  }
  (**(code **)(*(longlong *)pFVar3 + 0x188))
            (pFVar3,FVar4,(ulonglong)((param_2->BoneSwitchArray).NumBits + 0x1fU >> 5) << 2);
  if (((pFVar3->field_0x28 & 1) != 0) && ((pFVar3->field_0x2b & 5) == 0)) {
    TBitArray<FDefaultBitArrayAllocator>::ClearPartialSlackBits(this);
  }
  (**(code **)(*(longlong *)pFVar3 + 0x138))(pFVar3,&param_2->Asset);
  (**(code **)(*(longlong *)pFVar3 + 0x138))(pFVar3,&param_2->AssetSkeletalMesh);
  (**(code **)(*(longlong *)pFVar3 + 0x138))(pFVar3,&param_2->AssetSkeleton);
  pFVar3 = TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
                     (pFVar3,&param_2->SkeletonToPoseBoneIndexArray);
  pFVar3 = TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
                     (pFVar3,&param_2->PoseToSkeletonBoneIndexArray);
  pFVar3 = operator<<(pFVar3,&param_2->bDisableRetargeting);
  pFVar3 = operator<<(pFVar3,&param_2->bUseRAWData);
  operator<<(pFVar3,&param_2->bUseSourceData);
  return param_1;
}

// operator<< @ 14743a5d0

FArchive * __cdecl operator<<(FArchive *param_1,FCurveMetaData *param_2)

{
  uchar *puVar1;
  int iVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimPhysObjectVersion::GUID);
  operator<<(param_1,&(param_2->Type).bMaterial);
  operator<<(param_1,&(param_2->Type).bMorphtarget);
  TArrayPrivateFriend::Serialize<FBoneReference,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->LinkedBones);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimPhysObjectVersion::GUID);
  if (0xb < iVar2) {
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if (puVar1 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      param_2->MaxLOD = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      return param_1;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->MaxLOD,1);
  }
  return param_1;
}

// operator<< @ 14743a690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FRawCurveTracks *param_2)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  UPackage *pUVar3;
  FStructuredArchiveFromArchive *this;
  FStructuredArchiveSlot FVar4;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (Z_Registration_Info_UScriptStruct_FRawCurveTracks.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRawCurveTracks.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRawCurveTracks,(UObject *)pUVar3,
                         L"RawCurveTracks");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FRawCurveTracks.OuterSingleton;
  pcVar1 = *(code **)((Z_Registration_Info_UScriptStruct_FRawCurveTracks.OuterSingleton)->_padding_
                     + 0x2e0);
  this = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_1);
  FVar4 = FStructuredArchiveFromArchive::GetSlot(this);
  local_1c0 = 0;
  local_1c8 = 0;
  (*pcVar1)(pUVar2,*(undefined8 *)FVar4,param_2,pUVar2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
  return param_1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14743c2f4

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimDataModel::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAnimDataModel::_vector_deleting_destructor__adjustor_40__(UAnimDataModel *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAnimDataModel *)&this[-1].CurveData.TransformCurves.ArrayNum,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14743c310

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAnimInstance::InitializeAnimation'::__l14::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAnimInstance::InitializeAnimation'::`14'::<lambda_1>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c380

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBoneContainer,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FBoneContainer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c3c0

void * __thiscall
TThreadSingleton<FBlendProfileScratchData>::_scalar_deleting_destructor_
          (TThreadSingleton<FBlendProfileScratchData> *this,uint param_1)

{
  ~TThreadSingleton<FBlendProfileScratchData>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c400

void * __thiscall
FAnimInstanceProxy::_scalar_deleting_destructor_(FAnimInstanceProxy *this,uint param_1)

{
  ~FAnimInstanceProxy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x810);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c440

void * __thiscall
FAnimMontageInstance::_scalar_deleting_destructor_(FAnimMontageInstance *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MontageSyncFollowers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAnimNotifyEvent,int>
            ((FAnimNotifyEvent *)(this->ActiveStateBranchingPoints).AllocatorInstance.Data,
             (this->ActiveStateBranchingPoints).ArrayNum);
  pFVar1 = (this->ActiveStateBranchingPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrevSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NextSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Target.AllocatorInstance.Data
  ;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Original.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MontageSubStepper).SectionEndPositions_Target.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MontageSubStepper).SectionStartPositions_Target.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarkersPassedThisTick).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMontageSectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMontageBlendedInEnded);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMontageBlendingOutStarted);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMontageEnded);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c550

void * __thiscall
FAnimNotifyEvent::_scalar_deleting_destructor_(FAnimNotifyEvent *this,uint param_1)

{
  (this->EndLink)._padding_ = (longlong)&___7FAnimLinkableElement__6B_;
  this->_padding_ = (longlong)&___7FAnimLinkableElement__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c590

void * __thiscall
FBlendProfileScratchData::_scalar_deleting_destructor_(FBlendProfileScratchData *this,uint param_1)

{
  ForElementType<UE::Anim::FStackAttributeContainer_const_*> FVar1;
  ForElementType<FBlendedCurve_const_*> FVar2;
  ForElementType<FCompactPose_const_*> FVar3;
  ForElementType<float> FVar4;
  ForElementType<unsigned_char> FVar5;
  FScriptContainerElement *pFVar6;
  
  FVar1 = (this->BlendingAttributes).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Anim::FStackAttributeContainer_const_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->BlendingCurves).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FBlendedCurve_const_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar3 = (this->BlendingPoses).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FCompactPose_const_*>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar4 = (this->BlendingWeights).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<float>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar5 = (this->AdditivePoseIndices).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  FVar5 = (this->PoseIndices).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  DestructItems<FSlotEvaluationPose,int>
            ((FSlotEvaluationPose *)(this->AdditivePoses).AllocatorInstance.Data,
             (this->AdditivePoses).ArrayNum);
  pFVar6 = (this->AdditivePoses).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  DestructItems<FSlotEvaluationPose,int>
            ((FSlotEvaluationPose *)(this->Poses).AllocatorInstance.Data,(this->Poses).ArrayNum);
  pFVar6 = (this->Poses).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->BoneBlendProfileScales).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->PerBoneWeightTotalsAdditive).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->PerBoneWeightTotals).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->PerBoneWeights).AllocatorInstance.Data,(this->PerBoneWeights).ArrayNum);
  pFVar6 = (this->PerBoneWeights).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  TThreadSingleton<FBlendProfileScratchData>::~TThreadSingleton<FBlendProfileScratchData>
            ((TThreadSingleton<FBlendProfileScratchData> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c6b0

void * __thiscall
IAnimationDataModel::FModelNotifier::_scalar_deleting_destructor_(FModelNotifier *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c6e0

void * __thiscall
IAnimationDataModel::_scalar_deleting_destructor_(IAnimationDataModel *this,uint param_1)

{
  *this = (IAnimationDataModel)&___7IAnimationDataModel__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c720

void * __thiscall
UAnimCompress_BitwiseCompressOnly::_scalar_deleting_destructor_
          (UAnimCompress_BitwiseCompressOnly *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimCompress_BitwiseCompressOnly__6B_;
  UAnimCompress::~UAnimCompress((UAnimCompress *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c780

void * __thiscall
UAnimCompress_LeastDestructive::_scalar_deleting_destructor_
          (UAnimCompress_LeastDestructive *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimCompress_BitwiseCompressOnly__6B_;
  UAnimCompress::~UAnimCompress((UAnimCompress *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c7e0

void * __thiscall
UAnimCompress_PerTrackCompression::_scalar_deleting_destructor_
          (UAnimCompress_PerTrackCompression *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimCompress_PerTrackCompression__6B_;
  pFVar1 = (this->AllowedScaleFormats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllowedTranslationFormats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllowedRotationFormats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UAnimCompress_RemoveLinearKeys__6B_;
  UAnimCompress::~UAnimCompress((UAnimCompress *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c880

void * __thiscall
UAnimCompress_RemoveEverySecondKey::_scalar_deleting_destructor_
          (UAnimCompress_RemoveEverySecondKey *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimCompress_RemoveEverySecondKey__6B_;
  UAnimCompress::~UAnimCompress((UAnimCompress *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c8e0

void * __thiscall
UAnimCompress_RemoveLinearKeys::_scalar_deleting_destructor_
          (UAnimCompress_RemoveLinearKeys *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimCompress_RemoveLinearKeys__6B_;
  UAnimCompress::~UAnimCompress((UAnimCompress *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c940

void * __thiscall
UAnimCompress_RemoveTrivialKeys::_scalar_deleting_destructor_
          (UAnimCompress_RemoveTrivialKeys *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimCompress_RemoveTrivialKeys__6B_;
  UAnimCompress::~UAnimCompress((UAnimCompress *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743c9a0

void * __thiscall
UAnimCurveCompressionCodec::_scalar_deleting_destructor_
          (UAnimCurveCompressionCodec *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimCurveCompressionCodec__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743ca00

void * __thiscall
UAnimCurveCompressionCodec_CompressedRichCurve::_scalar_deleting_destructor_
          (UAnimCurveCompressionCodec_CompressedRichCurve *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimCurveCompressionCodec__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743ca60

void * __thiscall
UAnimCurveCompressionCodec_UniformIndexable::_scalar_deleting_destructor_
          (UAnimCurveCompressionCodec_UniformIndexable *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimCurveCompressionCodec__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743cac0

void * __thiscall
UAnimCurveCompressionCodec_UniformlySampled::_scalar_deleting_destructor_
          (UAnimCurveCompressionCodec_UniformlySampled *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimCurveCompressionCodec__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743cb20

void * __thiscall
UAnimCurveCompressionSettings::_scalar_deleting_destructor_
          (UAnimCurveCompressionSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimCurveCompressionSettings__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743cb80

void * __thiscall UAnimDataModel::_scalar_deleting_destructor_(UAnimDataModel *this,uint param_1)

{
  FModelNotifier *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAnimationDataModel__;
  pFVar1 = (this->Notifier).Ptr;
  if (pFVar1 != (FModelNotifier *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  DestructItems<FAnimatedBoneAttribute,int>
            ((FAnimatedBoneAttribute *)(this->AnimatedBoneAttributes).AllocatorInstance.Data,
             (this->AnimatedBoneAttributes).ArrayNum);
  pFVar2 = (this->AnimatedBoneAttributes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FTransformCurve,int>
            ((FTransformCurve *)(this->CurveData).TransformCurves.AllocatorInstance.Data,
             (this->CurveData).TransformCurves.ArrayNum);
  pFVar2 = (this->CurveData).TransformCurves.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FFloatCurve,int>
            ((FFloatCurve *)(this->CurveData).FloatCurves.AllocatorInstance.Data,
             (this->CurveData).FloatCurves.ArrayNum);
  pFVar2 = (this->CurveData).FloatCurves.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FBoneAnimationTrack,int>
            ((FBoneAnimationTrack *)(this->BoneAnimationTracks).AllocatorInstance.Data,
             (this->BoneAnimationTracks).ArrayNum);
  pFVar2 = (this->BoneAnimationTracks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ModifiedEvent).field_0x8,*(int *)&(this->ModifiedEvent).field_0x10);
  pvVar3 = *(void **)&(this->ModifiedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ModifiedEvent);
  pvVar3 = *(void **)&(this->ModifiedEventDynamic).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ModifiedEventDynamic);
  this->_padding_ = (longlong)&___7IAnimationDataModel__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743cce0

void * __thiscall UAnimInstance::_scalar_deleting_destructor_(UAnimInstance *this,uint param_1)

{
  ~UAnimInstance(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x430);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743cd40

void * __thiscall
UAnimationDataController::_scalar_deleting_destructor_(UAnimationDataController *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14743cda0

void * __thiscall
UAnimationDataModel::_scalar_deleting_destructor_(UAnimationDataModel *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// AnimationFormat_GetStats @ 1474405a0

void __cdecl
AnimationFormat_GetStats
          (FUECompressedAnimData *param_1,int *param_2,int *param_3,int *param_4,int *param_5,
          int *param_6,int *param_7,float *param_8,float *param_9,float *param_10,int *param_11,
          int *param_12,int *param_13,int *param_14)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  int local_res8;
  int local_58;
  int local_54;
  longlong local_50;
  
  piVar7 = param_11;
  uVar13 = 0;
  iVar12 = 0;
  *param_11 = *(int *)&param_1->field_0x18 << 2;
  iVar9 = (0xff < *(int *)&param_1->field_0x8) + 1;
  uVar14 = 0;
  if (*(int *)&param_1->field_0x60 == 2) {
    local_58 = 0;
    *param_8 = 0.0;
    local_res8 = 0;
    local_54 = 0;
    param_11._0_4_ = 0;
    *param_9 = 0.0;
    *param_10 = 0.0;
    *param_2 = *(int *)&param_1->field_0x18 / 2;
    *param_3 = *(int *)&param_1->field_0x18 / 2;
    *param_4 = *(int *)&param_1->field_0x28 / *(int *)&param_1->field_0x30;
    *param_5 = 0;
    *param_6 = 0;
    *param_7 = 0;
    *param_12 = 0;
    *param_13 = 0;
    *param_14 = 0;
    if (0 < *param_2) {
      local_50 = 0;
      uVar15 = uVar13;
      uVar21 = uVar13;
      do {
        uVar18 = (uint)uVar15;
        uVar20 = uVar14;
        if ((int)uVar18 < *(int *)&param_1->field_0x18) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        uVar19 = (uint)uVar21;
        if ((uVar20 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , uVar19 = (uint)param_11, bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = *(int *)(local_50 + *(longlong *)&param_1->field_0x10);
        if (iVar5 == -1) {
          *param_5 = *param_5 + 1;
          param_11._0_4_ = uVar19;
LAB_147440afd:
          *param_12 = *param_12 + 1;
        }
        else {
          uVar20 = *(uint *)((longlong)iVar5 + *(longlong *)&param_1->field_0x38);
          uVar19 = (int)uVar20 >> 0x1c & 0xf;
          uVar6 = uVar20 & 0xffffff;
          uVar17 = 1;
          if (uVar19 != 3) {
            uVar17 = (uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x03\x01\x01\x02\x01\x02\x02\x03\x03\x01\x01\x02\x01\x02\x02\x03\x06\x02\x02\x04\x02\x04\x04\x06\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
                           [uVar19 * 8 | uVar20 >> 0x18 & 7];
          }
          local_58 = local_58 + uVar6;
          uVar16 = uVar14;
          if (uVar19 == 3) {
            uVar16 = (uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x03\x01\x01\x02\x01\x02\x02\x03\x03\x01\x01\x02\x01\x02\x02\x03\x06\x02\x02\x04\x02\x04\x04\x06\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
                           [uVar19 * 8 | uVar20 >> 0x18 & 7];
          }
          *param_8 = (float)(int)(uVar17 * CompressedRotationStrides[uVar19] * uVar6) + *param_8;
          iVar5 = iVar12;
          if ((uVar20 >> 0x1b & 1) != 0) {
            iVar5 = uVar6 * iVar9;
          }
          *piVar7 = iVar5 + *piVar7 + uVar16 * 4;
          *param_5 = *param_5 + uVar6;
          if (uVar6 < 2) goto LAB_147440afd;
        }
        param_11._0_4_ = (uint)param_11 + 1;
        uVar21 = (ulonglong)(uint)param_11;
        local_50 = local_50 + 8;
        uVar15 = (ulonglong)(uVar18 + 2);
      } while ((int)(uint)param_11 < *param_2);
    }
    uVar20 = 0;
    if (0 < *param_3) {
      uVar18 = 1;
      uVar15 = uVar13;
      uVar21 = uVar13;
      do {
        uVar19 = uVar14;
        if ((int)uVar18 < *(int *)&param_1->field_0x18) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar12 = *(int *)(uVar21 + 4 + *(longlong *)&param_1->field_0x10);
        if (iVar12 == -1) {
          *param_6 = *param_6 + 1;
LAB_147440c56:
          *param_13 = *param_13 + 1;
        }
        else {
          uVar19 = *(uint *)((longlong)iVar12 + *(longlong *)&param_1->field_0x38);
          uVar6 = (int)uVar19 >> 0x1c & 0xf;
          uVar16 = uVar19 & 0xffffff;
          uVar17 = 1;
          if (uVar6 != 3) {
            uVar17 = (uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x03\x01\x01\x02\x01\x02\x02\x03\x03\x01\x01\x02\x01\x02\x02\x03\x06\x02\x02\x04\x02\x04\x04\x06\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
                           [uVar6 * 8 | uVar19 >> 0x18 & 7];
          }
          local_res8 = local_res8 + uVar16;
          uVar10 = uVar20;
          if (uVar6 == 3) {
            uVar10 = (uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x03\x01\x01\x02\x01\x02\x02\x03\x03\x01\x01\x02\x01\x02\x02\x03\x06\x02\x02\x04\x02\x04\x04\x06\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
                           [uVar6 * 8 | uVar19 >> 0x18 & 7];
          }
          *param_9 = (float)(int)(uVar16 * uVar17 * CompressedRotationStrides[uVar6]) + *param_9;
          uVar17 = uVar20;
          if ((uVar19 >> 0x1b & 1) != 0) {
            uVar17 = uVar16 * iVar9;
          }
          *piVar7 = uVar17 + *piVar7 + uVar10 * 4;
          *param_6 = *param_6 + uVar16;
          if (uVar16 < 2) goto LAB_147440c56;
        }
        uVar19 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar19;
        uVar18 = uVar18 + 2;
        uVar21 = uVar21 + 8;
      } while ((int)uVar19 < *param_3);
    }
    if (0 < *param_4) {
      do {
        piVar8 = TArrayView<int,int>::operator[]
                           ((TArrayView<int,int> *)&param_1->field_0x20,
                            (int)uVar13 * *(int *)&param_1->field_0x30);
        if (*piVar8 == -1) {
          *param_7 = *param_7 + 1;
LAB_147440d62:
          *param_14 = *param_14 + 1;
        }
        else {
          uVar14 = *(uint *)((longlong)*piVar8 + *(longlong *)&param_1->field_0x38);
          uVar19 = (int)uVar14 >> 0x1c & 0xf;
          uVar17 = uVar14 & 0xffffff;
          uVar18 = 1;
          if (uVar19 != 3) {
            uVar18 = (uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x03\x01\x01\x02\x01\x02\x02\x03\x03\x01\x01\x02\x01\x02\x02\x03\x06\x02\x02\x04\x02\x04\x04\x06\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
                           [uVar19 * 8 | uVar14 >> 0x18 & 7];
          }
          local_54 = local_54 + uVar17;
          uVar6 = uVar20;
          if (uVar19 == 3) {
            uVar6 = (uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x03\x01\x01\x02\x01\x02\x02\x03\x03\x01\x01\x02\x01\x02\x02\x03\x06\x02\x02\x04\x02\x04\x04\x06\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
                          [uVar19 * 8 | uVar14 >> 0x18 & 7];
          }
          *param_10 = (float)(int)(uVar17 * uVar18 * CompressedRotationStrides[uVar19]) + *param_10;
          uVar18 = uVar20;
          if ((uVar14 >> 0x1b & 1) != 0) {
            uVar18 = uVar17 * iVar9;
          }
          *piVar7 = uVar18 + *piVar7 + uVar6 * 4;
          *param_7 = *param_7 + uVar17;
          if (uVar17 < 2) goto LAB_147440d62;
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
      } while ((int)uVar14 < *param_4);
    }
    if (0 < local_res8) {
      *param_9 = *param_9 / (float)local_res8;
    }
    if (0 < local_58) {
      *param_8 = *param_8 / (float)local_58;
    }
    if (0 < local_54) {
      *param_10 = *param_10 / (float)local_54;
    }
  }
  else {
    iVar5 = CompressedScaleNum[*(int *)&param_1->field_0x6c];
    iVar11 = CompressedScaleStrides[*(int *)&param_1->field_0x6c];
    iVar1 = CompressedRotationStrides[*(int *)&param_1->field_0x68];
    iVar2 = CompressedRotationNum[*(int *)&param_1->field_0x68];
    *param_8 = (float)(CompressedTranslationStrides[*(int *)&param_1->field_0x64] *
                      CompressedTranslationNum[*(int *)&param_1->field_0x64]);
    *param_9 = (float)(iVar2 * iVar1);
    *param_10 = (float)(iVar5 * iVar11);
    *param_2 = (int)(*(int *)&param_1->field_0x18 + (*(int *)&param_1->field_0x18 >> 0x1f & 3U)) >>
               2;
    *param_3 = (int)(*(int *)&param_1->field_0x18 + (*(int *)&param_1->field_0x18 >> 0x1f & 3U)) >>
               2;
    *param_4 = *(int *)&param_1->field_0x28 / *(int *)&param_1->field_0x30;
    *param_5 = 0;
    *param_6 = 0;
    *param_7 = 0;
    *param_12 = 0;
    *param_13 = 0;
    *param_14 = 0;
    if (0 < *param_2) {
      uVar20 = 1;
      uVar15 = uVar13;
      uVar21 = uVar13;
      do {
        uVar18 = uVar14;
        if ((int)uVar20 < *(int *)&param_1->field_0x18) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = *(int *)(*(longlong *)&param_1->field_0x10 + 4 + uVar15);
        *param_5 = *param_5 + iVar5;
        if (iVar5 == 1) {
          *param_12 = *param_12 + 1;
        }
        else {
          uVar18 = uVar14;
          if (*(int *)&param_1->field_0x60 == 1) {
            uVar18 = iVar5 * iVar9;
          }
          *param_11 = *param_11 + uVar18;
        }
        uVar18 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar18;
        uVar20 = uVar20 + 4;
        uVar15 = uVar15 + 0x10;
      } while ((int)uVar18 < *param_2);
    }
    if (0 < *param_3) {
      uVar20 = 3;
      uVar15 = uVar13;
      uVar21 = uVar13;
      do {
        uVar18 = uVar14;
        if ((int)uVar20 < *(int *)&param_1->field_0x18) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = *(int *)(uVar21 + 0xc + *(longlong *)&param_1->field_0x10);
        *param_6 = *param_6 + iVar5;
        if (iVar5 == 1) {
          *param_13 = *param_13 + 1;
        }
        else {
          uVar18 = uVar14;
          if (*(int *)&param_1->field_0x60 == 1) {
            uVar18 = iVar5 * iVar9;
          }
          *param_11 = *param_11 + uVar18;
        }
        uVar18 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar18;
        uVar20 = uVar20 + 4;
        uVar21 = uVar21 + 0x10;
      } while ((int)uVar18 < *param_3);
    }
    if (0 < *param_4) {
      do {
        piVar7 = TArrayView<int,int>::operator[]
                           ((TArrayView<int,int> *)&param_1->field_0x20,
                            (int)uVar13 * *(int *)&param_1->field_0x30 + 1);
        iVar5 = *piVar7;
        *param_7 = *param_7 + iVar5;
        if (iVar5 == 1) {
          *param_14 = *param_14 + 1;
        }
        else {
          uVar20 = uVar14;
          if (*(int *)&param_1->field_0x60 == 1) {
            uVar20 = iVar5 * iVar9;
          }
          *param_11 = *param_11 + uVar20;
        }
        uVar20 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar20;
      } while ((int)uVar20 < *param_4);
    }
    iVar9 = iVar12;
    if (*(int *)&param_1->field_0x68 == 3) {
      iVar9 = (*param_3 - *param_13) * 0x18;
    }
    iVar5 = *param_11;
    *param_11 = iVar5 + iVar9;
    iVar11 = iVar12;
    if (*(int *)&param_1->field_0x64 == 3) {
      iVar11 = (*param_2 - *param_12) * 0x18;
    }
    iVar11 = iVar5 + iVar9 + iVar11;
    *param_11 = iVar11;
    if (*(int *)&param_1->field_0x6c == 3) {
      iVar12 = (*param_4 - *param_14) * 0x18;
    }
    *param_11 = iVar12 + iVar11;
  }
  return;
}

// ByteSwapIn @ 147441b90

void __thiscall
AnimEncoding::ByteSwapIn(AnimEncoding *this,FUECompressedAnimData *param_1,FMemoryReader *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h",
             0x85,L"Pure virtual not implemented (%s)");
  return;
}

// ByteSwapIn @ 147441bc0

void __thiscall
AnimEncodingLegacyBase::ByteSwapIn
          (AnimEncodingLegacyBase *this,FUECompressedAnimData *param_1,FMemoryReader *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  lVar13 = param_2->_padding_;
  iVar5 = (int)(*(int *)&param_1->field_0x18 + (*(int *)&param_1->field_0x18 >> 0x1f & 3U)) >> 2;
  lVar11 = (longlong)iVar5;
  iVar6 = (**(code **)(param_2->_padding_ + 0x30))(param_2);
  if ((*(int *)&param_1->field_0x40 != iVar6 - (int)lVar13) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompressedData.CompressedByteStream.Num() == OriginalNumBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimEncoding.cpp"
                         ,0xc0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_40 = *(longlong *)&param_1->field_0x38;
  iVar14 = 0;
  iVar6 = *(int *)&param_1->field_0x28;
  if (0 < iVar5) {
    uVar10 = 2;
    lVar13 = 0;
    do {
      iVar5 = (int)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
      uVar7 = 0;
      if ((int)(uVar10 - 2) < *(int *)&param_1->field_0x18) {
        uVar7 = ~(uVar10 - 2) >> 0x1f;
      }
      if (uVar7 == 0) {
        iVar5 = (int)(uVar10 - 2) >> 0x1f;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar1 = *(int *)(lVar13 + *(longlong *)&param_1->field_0x10);
      uVar7 = 0;
      if ((int)(uVar10 - 1) < *(int *)&param_1->field_0x18) {
        uVar7 = ~(uVar10 - 1) >> 0x1f;
      }
      if (uVar7 == 0) {
        iVar5 = (int)(uVar10 - 1) >> 0x1f;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar17 = *(undefined4 *)(lVar13 + 4 + *(longlong *)&param_1->field_0x10);
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&param_1->field_0x18) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if (uVar7 == 0) {
        iVar5 = (int)uVar10 >> 0x1f;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar7 = uVar10 + 1;
      iVar2 = *(int *)(lVar13 + 8 + *(longlong *)&param_1->field_0x10);
      uVar8 = 0;
      if ((int)uVar7 < *(int *)&param_1->field_0x18) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if (uVar8 == 0) {
        iVar5 = (int)uVar7 >> 0x1f;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar15 = CONCAT44(iVar5,uVar17);
      uVar17 = *(undefined4 *)(lVar13 + 0xc + *(longlong *)&param_1->field_0x10);
      local_58 = iVar1 + local_40;
      (**(code **)(**(longlong **)&param_1->field_0x48 + 0x48))
                (*(longlong **)&param_1->field_0x48,param_1,param_2,&local_58,uVar15);
      uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
      lVar12 = (longlong)(int)(((int)local_58 + 3U & 0xfffffffc) - (int)local_58);
      (**(code **)(param_2->_padding_ + 0x188))(param_2,local_58,lVar12);
      local_58 = local_58 + lVar12;
      local_50 = iVar2 + local_40;
      in_stack_ffffffffffffff98 = CONCAT44(uVar16,uVar17);
      (**(code **)(**(longlong **)&param_1->field_0x50 + 0x40))
                (*(longlong **)&param_1->field_0x50,param_1,param_2,&local_50,
                 in_stack_ffffffffffffff98);
      lVar12 = (longlong)(int)(((int)local_50 + 3U & 0xfffffffc) - (int)local_50);
      (**(code **)(param_2->_padding_ + 0x188))(param_2,local_50,lVar12);
      uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
      local_50 = local_50 + lVar12;
      if (0 < iVar6) {
        piVar9 = TArrayView<int,int>::operator[]
                           ((TArrayView<int,int> *)&param_1->field_0x20,
                            iVar14 * *(int *)&param_1->field_0x30);
        iVar5 = *piVar9;
        piVar9 = TArrayView<int,int>::operator[]
                           ((TArrayView<int,int> *)&param_1->field_0x20,
                            iVar14 * *(int *)&param_1->field_0x30 + 1);
        local_48 = iVar5 + local_40;
        in_stack_ffffffffffffff98 = CONCAT44(uVar17,*piVar9);
        (**(code **)(**(longlong **)&param_1->field_0x58 + 0x50))
                  (*(longlong **)&param_1->field_0x58,param_1,param_2,&local_48,
                   in_stack_ffffffffffffff98);
        lVar12 = (longlong)(int)(((int)local_48 + 3U & 0xfffffffc) - (int)local_48);
        (**(code **)(param_2->_padding_ + 0x188))(param_2,local_48,lVar12);
        local_48 = local_48 + lVar12;
      }
      iVar14 = iVar14 + 1;
      uVar10 = uVar10 + 4;
      lVar13 = lVar13 + 0x10;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// ByteSwapOut @ 147442090

void __thiscall
AnimEncoding::ByteSwapOut(AnimEncoding *this,FUECompressedAnimData *param_1,FMemoryWriter *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h",
             0x90,L"Pure virtual not implemented (%s)");
  return;
}

// ByteSwapOut @ 1474420c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AnimEncodingLegacyBase::ByteSwapOut
          (AnimEncodingLegacyBase *this,FUECompressedAnimData *param_1,FMemoryWriter *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_74;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  iVar1 = *(int *)&param_2->field_0x90;
  local_50 = *(longlong *)&param_1->field_0x38;
  iVar2 = *(int *)&param_1->field_0x28;
  local_74 = 0;
  iVar10 = (int)(*(int *)&param_1->field_0x18 + (*(int *)&param_1->field_0x18 >> 0x1f & 3U)) >> 2;
  local_48 = (longlong)iVar10;
  if (0 < iVar10) {
    lVar14 = 0;
    uVar15 = 2;
    do {
      uVar12 = 0;
      if ((int)(uVar15 - 2) < *(int *)&param_1->field_0x18) {
        uVar12 = ~(uVar15 - 2) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = *(int *)(*(longlong *)&param_1->field_0x10 + lVar14);
      uVar12 = 0;
      if ((int)(uVar15 - 1) < *(int *)&param_1->field_0x18) {
        uVar12 = ~(uVar15 - 1) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(undefined4 *)(*(longlong *)&param_1->field_0x10 + 4 + lVar14);
      uVar12 = 0;
      if ((int)uVar15 < *(int *)&param_1->field_0x18) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar4 = *(int *)(*(longlong *)&param_1->field_0x10 + 8 + lVar14);
      uVar12 = 0;
      if ((int)(uVar15 + 1) < *(int *)&param_1->field_0x18) {
        uVar12 = ~(uVar15 + 1) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar5 = *(undefined4 *)(*(longlong *)&param_1->field_0x10 + 0xc + lVar14);
      local_68 = iVar10 + local_50;
      *(longlong *)&param_2->field_0x90 = (longlong)(iVar1 + iVar10);
      plVar6 = *(longlong **)&param_1->field_0x48;
      if (plVar6 == (longlong *)0x0) {
        UE::Logging::Private::BasicFatalLog
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
      }
      else {
        (**(code **)(*plVar6 + 0x60))(plVar6,param_1,param_2,&local_68,uVar3);
      }
      local_res10[0] = 0x55;
      uVar12 = ((int)local_68 + 3U & 0xfffffffc) - (int)local_68;
      if (0 < (int)uVar12) {
        uVar13 = (ulonglong)uVar12;
        do {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,1);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      lVar8 = local_50;
      local_68 = local_68 + (int)uVar12;
      *(longlong *)&param_2->field_0x90 = (longlong)(iVar1 + iVar4);
      local_60 = iVar4 + local_50;
      (**(code **)(**(longlong **)&param_1->field_0x50 + 0x58))
                (*(longlong **)&param_1->field_0x50,param_1,param_2,&local_60,uVar5);
      local_res18[0] = 0x55;
      uVar12 = ((int)local_60 + 3U & 0xfffffffc) - (int)local_60;
      if (0 < (int)uVar12) {
        uVar13 = (ulonglong)uVar12;
        do {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res18,1);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      local_60 = local_60 + (int)uVar12;
      if (0 < iVar2) {
        piVar11 = TArrayView<int,int>::operator[]
                            ((TArrayView<int,int> *)&param_1->field_0x20,
                             local_74 * *(int *)&param_1->field_0x30);
        iVar10 = *piVar11;
        piVar11 = TArrayView<int,int>::operator[]
                            ((TArrayView<int,int> *)&param_1->field_0x20,
                             local_74 * *(int *)&param_1->field_0x30 + 1);
        iVar4 = *piVar11;
        local_58 = lVar8 + iVar10;
        *(longlong *)&param_2->field_0x90 = (longlong)(iVar1 + iVar10);
        plVar6 = *(longlong **)&param_1->field_0x58;
        if (plVar6 == (longlong *)0x0) {
          UE::Logging::Private::BasicFatalLog
                    (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
        }
        else {
          (**(code **)(*plVar6 + 0x68))(plVar6,param_1,param_2,&local_58,iVar4);
        }
        local_res20[0] = 0x55;
        uVar12 = ((int)local_58 + 3U & 0xfffffffc) - (int)local_58;
        if (0 < (int)uVar12) {
          uVar13 = (ulonglong)uVar12;
          do {
            (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res20,1);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        local_58 = local_58 + (int)uVar12;
      }
      local_74 = local_74 + 1;
      uVar15 = uVar15 + 4;
      lVar14 = lVar14 + 0x10;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  return;
}

// ByteSwapRotationIn @ 147442740

void __thiscall
AnimEncodingLegacyBase::ByteSwapRotationIn
          (AnimEncodingLegacyBase *this,FUECompressedAnimData *param_1,FMemoryReader *param_2,
          uchar **param_3,int param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h",
             0x134,L"Pure virtual not implemented (%s)");
  return;
}

// ByteSwapRotationOut @ 1474429a0

void __thiscall
AnimEncodingLegacyBase::ByteSwapRotationOut
          (AnimEncodingLegacyBase *this,FUECompressedAnimData *param_1,FMemoryWriter *param_2,
          uchar **param_3,int param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h",
             0x163,L"Pure virtual not implemented (%s)");
  return;
}

// ByteSwapScaleIn @ 147442c10

void __thiscall
AnimEncodingLegacyBase::ByteSwapScaleIn
          (AnimEncodingLegacyBase *this,FUECompressedAnimData *param_1,FMemoryReader *param_2,
          uchar **param_3,int param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h",
             0x154,L"Pure virtual not implemented (%s)");
  return;
}

// ByteSwapScaleOut @ 147442e70

void __thiscall
AnimEncodingLegacyBase::ByteSwapScaleOut
          (AnimEncodingLegacyBase *this,FUECompressedAnimData *param_1,FMemoryWriter *param_2,
          uchar **param_3,int param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h",
             0x181,L"Pure virtual not implemented (%s)");
  return;
}

// ByteSwapTranslationIn @ 1474430e0

void __thiscall
AnimEncodingLegacyBase::ByteSwapTranslationIn
          (AnimEncodingLegacyBase *this,FUECompressedAnimData *param_1,FMemoryReader *param_2,
          uchar **param_3,int param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h",
             0x144,L"Pure virtual not implemented (%s)");
  return;
}

// ByteSwapTranslationOut @ 147443340

void __thiscall
AnimEncodingLegacyBase::ByteSwapTranslationOut
          (AnimEncodingLegacyBase *this,FUECompressedAnimData *param_1,FMemoryWriter *param_2,
          uchar **param_3,int param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h",
             0x172,L"Pure virtual not implemented (%s)");
  return;
}

// CalcDelta @ 1474436c0

float __cdecl CalcDelta(TQuat<float> *param_1,TQuat<float> *param_2)

{
  float _X;
  float fVar1;
  
  fVar1 = (float)((uint)(param_1->W * param_2->W + param_1->Z * param_2->Z +
                        param_1->Y * param_2->Y + param_1->X * param_2->X) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (__real_3f7ffffe <= fVar1) {
    return 0.0;
  }
  _X = __real_bf800000;
  if ((__real_bf800000 <= fVar1) && (_X = fVar1, __real_3f800000 <= fVar1)) {
    _X = __real_3f800000;
  }
  fVar1 = acosf(_X);
  return fVar1 * __real_3ea2f983;
}

// CalcDelta @ 1474436d0

float __cdecl CalcDelta(TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  fVar3 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  return SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
}

// EmptyLinkFunctionForGeneratedCodeAnimCompress_BitwiseCompressOnly @ 147448fe0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCompress_BitwiseCompressOnly(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimCompress_LeastDestructive @ 147448ff0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCompress_LeastDestructive(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimCompress_PerTrackCompression @ 147449000

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCompress_PerTrackCompression(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveEverySecondKey @ 147449010

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveEverySecondKey(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveLinearKeys @ 147449020

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveLinearKeys(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveTrivialKeys @ 147449030

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveTrivialKeys(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec @ 147449040

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec_CompressedRichCurve @ 147449050

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec_CompressedRichCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec_UniformIndexable @ 147449060

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec_UniformIndexable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec_UniformlySampled @ 147449070

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec_UniformlySampled(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionSettings @ 147449080

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimCurveTypes @ 147449090

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCurveTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimDataModel @ 1474490a0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimDataModel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimExecutionContext @ 1474490b0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimExecutionContext(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimInstance @ 1474490c0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimInstanceProxy @ 1474490d0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimInstanceProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIAnimationDataController @ 1474490e0

void __cdecl EmptyLinkFunctionForGeneratedCodeIAnimationDataController(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIAnimationDataModel @ 1474490f0

void __cdecl EmptyLinkFunctionForGeneratedCodeIAnimationDataModel(void)

{
  return;
}

// FOnAllMontageInstancesEndedMCDelegate_DelegateWrapper @ 14744a5f0

void __cdecl
FOnAllMontageInstancesEndedMCDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnMontageBlendedInEndedMCDelegate_DelegateWrapper @ 14744a600

void __cdecl
FOnMontageBlendedInEndedMCDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UAnimMontage *param_2)

{
  UAnimMontage *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnMontageBlendingOutStartedMCDelegate_DelegateWrapper @ 14744a620

void __cdecl
FOnMontageBlendingOutStartedMCDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UAnimMontage *param_2,
          bool param_3)

{
  UAnimMontage *local_18;
  undefined1 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FOnMontageEndedMCDelegate_DelegateWrapper @ 14744a650

void __cdecl
FOnMontageEndedMCDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UAnimMontage *param_2,
          bool param_3)

{
  UAnimMontage *local_18;
  undefined1 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FOnMontageSectionChangedMCDelegate_DelegateWrapper @ 14744a680

void __cdecl
FOnMontageSectionChangedMCDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UAnimMontage *param_2,
          FName param_3,bool param_4)

{
  UAnimMontage *local_28;
  FName local_20;
  undefined1 local_18;
  
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  return;
}

// FOnMontageStartedMCDelegate_DelegateWrapper @ 14744a6b0

void __cdecl
FOnMontageStartedMCDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UAnimMontage *param_2)

{
  UAnimMontage *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FPlayMontageAnimNotifyDelegate_DelegateWrapper @ 14744a6d0

void __cdecl
FPlayMontageAnimNotifyDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FName param_2,
          FBranchingPointNotifyPayload *param_3)

{
  FName local_38;
  USkeletalMeshComponent *local_30;
  UAnimSequenceBase *pUStack_28;
  FAnimNotifyEvent *local_20;
  undefined8 uStack_18;
  
  local_30 = param_3->SkelMeshComponent;
  pUStack_28 = param_3->SequenceAsset;
  local_20 = param_3->NotifyEvent;
  uStack_18._0_4_ = param_3->MontageInstanceID;
  uStack_18._4_1_ = param_3->bReachedEnd;
  uStack_18._5_3_ = *(undefined3 *)&param_3->field_0x1d;
  local_38 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_38);
  return;
}

// GetBoneAtomRotation @ 14744f7a0

void __thiscall
AnimEncodingLegacyBase::GetBoneAtomRotation
          (AnimEncodingLegacyBase *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h",
             0xf7,L"Pure virtual not implemented (%s)");
  return;
}

// GetBoneAtomScale @ 147451900

void __thiscall
AnimEncodingLegacyBase::GetBoneAtomScale
          (AnimEncodingLegacyBase *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h",
             0x10f,L"Pure virtual not implemented (%s)");
  return;
}

// GetBoneAtomTranslation @ 1474538e0

void __thiscall
AnimEncodingLegacyBase::GetBoneAtomTranslation
          (AnimEncodingLegacyBase *this,TTransform<double> *param_1,
          FAnimSequenceDecompressionContext *param_2,int param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h",
             0x103,L"Pure virtual not implemented (%s)");
  return;
}

// GetPoseRotations @ 14745b2f0

void __thiscall
AnimEncoding::GetPoseRotations
          (AnimEncoding *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h",
             0x9e,L"Pure virtual not implemented (%s)");
  return;
}

// GetPoseScales @ 14745e690

void __thiscall
AnimEncoding::GetPoseScales
          (AnimEncoding *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h",
             0xb6,L"Pure virtual not implemented (%s)");
  return;
}

// GetPoseTranslations @ 147461c70

void __thiscall
AnimEncoding::GetPoseTranslations
          (AnimEncoding *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h",
             0xaa,L"Pure virtual not implemented (%s)");
  return;
}

// MakeGuidForMessage @ 147468260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGuid * __cdecl MakeGuidForMessage(FGuid *__return_storage_ptr__,FText *param_1)

{
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  int iVar1;
  FString *pFVar2;
  longlong lVar3;
  undefined1 auStackY_128 [32];
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  FSHA1 local_c8;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar2 = FText::ToString(param_1);
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = (pFVar2->Data).ArrayNum;
  lVar3 = (longlong)local_d0;
  _Src = (pFVar2->Data).AllocatorInstance.Data;
  if (local_d0 == 0) {
    local_cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d0,0,&local_d8,local_d0,&local_cc);
    memcpy(local_d8.Data,_Src,lVar3 * 2);
  }
  iVar1 = local_d0;
  _Src_00.Data = local_d8.Data;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = local_d0;
  if (local_d0 == 0) {
    local_dc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d0,0,&local_e8,local_d0,&local_dc);
    memcpy(local_e8.Data,_Src_00.Data,(longlong)iVar1 * 2);
  }
  FSHA1::FSHA1(&local_c8);
  FSHA1::Update(&local_c8,(uchar *)local_e8.Data,(ulonglong)(uint)(local_e0 * 2));
  FSHA1::Final(&local_c8);
  FSHA1::GetHash(&local_c8,(uchar *)&local_38);
  __return_storage_ptr__->A = local_38 ^ local_28;
  __return_storage_ptr__->B = local_34;
  __return_storage_ptr__->C = local_30;
  __return_storage_ptr__->D = local_2c;
  FSHA1::~FSHA1(&local_c8);
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return __return_storage_ptr__;
}

// OutputCurveMap @ 14746bd40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
OutputCurveMap(TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
               *param_1,UCanvas *param_2,FDisplayDebugManager *param_3,float param_4)

{
  FName *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  TTuple<FName,float> *pTVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  float local_res20 [2];
  undefined1 local_68;
  FIdentityFunctor local_67 [7];
  FName local_60;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38 [2];
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_res20[0] = param_4;
  TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
  GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
              *)param_1,&local_58);
  AlgoImpl::
  IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
            ((FName *)local_58.AllocatorInstance.Data,local_58.ArrayNum,local_67[0],
             (FNameLexicalLess *)local_67);
  iVar3 = local_58.ArrayNum;
  uVar6 = (ulonglong)local_58.ArrayNum;
  pFVar1 = (FName *)(local_58.AllocatorInstance.Data + uVar6 * 8);
  FVar7.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar3) {
      local_68 = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_68);
    }
    if ((FName *)FVar7.Data == pFVar1) break;
    local_60 = *(FName *)FVar7.Data;
    pTVar5 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                     *)param_1,local_60);
    if ((pTVar5 == (TTuple<FName,float> *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FName::ToString(&local_60,local_38);
    FString::PrintfImpl(&local_48,L"%s: %.3f");
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
    FDisplayDebugManager::DrawString(param_3,&local_48,local_res20);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    uVar6 = local_58._8_8_ & 0xffffffff;
    FVar7.Data = FVar7.Data + 8;
  }
  if ((FName *)local_58.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// OutputTickRecords @ 14746bee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
OutputTickRecords(TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *param_1,UCanvas *param_2,
                 float param_3,int param_4,FLinearColor *param_5,FLinearColor *param_6,
                 FLinearColor *param_7,FDisplayDebugManager *param_8,bool param_9)

{
  undefined8 *puVar1;
  FBlendSampleData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  UClass *pUVar10;
  FLinearColor *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *this;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  longlong *plVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  FIdentityFunctor local_res8;
  float local_res18 [2];
  uint local_res20;
  undefined1 local_218 [8];
  ForAnyElementType local_210;
  int local_208;
  int local_204;
  uint local_200;
  FName local_1f8;
  FName local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  FString local_1d8;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0 [9];
  
  fVar7 = __real_c0800000;
  fVar6 = __real_40800000;
  fVar5 = __real_3f800000;
  iVar16 = param_1->ArrayNum;
  local_200 = 0;
  if (0 < iVar16) {
    local_res8 = SUB81(param_1,0);
    local_1e0 = 0;
    local_res18[0] = param_3;
    local_res20 = param_4;
    do {
      lVar20 = local_1e0;
      uVar9 = local_200;
      uVar15 = 0;
      if ((int)local_200 < iVar16) {
        uVar15 = ~local_200 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this = (param_1->AllocatorInstance).Data + lVar20;
      if (((param_4 == 0xffffffff) || (this[0x20].field_0x0 == '\0')) || (uVar9 == param_4)) {
        pFVar11 = param_5;
        if (uVar9 == param_4) {
          pFVar11 = param_6;
        }
        lVar20 = *(longlong *)((longlong)&pFVar11->field0_0x0 + 8);
        (param_8->DebugTextItem)._padding_ = *(longlong *)&pFVar11->field0_0x0;
        (param_8->DebugTextItem)._padding_ = lVar20;
        local_1b8 = *(FName *)(*(longlong *)(*(longlong *)this + 0x10) + 0x18);
        FName::ToString(&local_1b8,&local_170);
        local_1b0 = *(FName *)(*(longlong *)this + 0x18);
        FName::ToString(&local_1b0,&local_180);
        FString::PrintfImpl(&local_1d8,L"%i) %s (%s) W(%.f%%)");
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        if (*(longlong *)this == 0) {
LAB_14746c22f:
          FString::PrintfImpl(&local_150,L" P(%.2f)");
          iVar16 = local_150.Data.ArrayNum + -1;
          if (local_150.Data.ArrayNum == 0) {
            iVar16 = 0;
          }
          FString::AppendChars(&local_1d8,(wchar_t *)local_150.Data.AllocatorInstance.Data,iVar16);
          FVar12.Data = local_150.Data.AllocatorInstance.Data;
        }
        else {
          pUVar10 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
          bVar8 = FObjectPtr::IsA((FObjectPtr *)this,pUVar10);
          if ((!bVar8) || (*(longlong **)this == (longlong *)0x0)) goto LAB_14746c22f;
          (**(code **)(**(longlong **)this + 0x2c0))();
          FString::PrintfImpl(&local_160,L" P(%.2f/%.2f)");
          uVar15 = local_160.Data.ArrayNum - 1;
          if (local_160.Data.ArrayNum == 0) {
            uVar15 = 0;
          }
          FString::AppendChars(&local_1d8,(wchar_t *)local_160.Data.AllocatorInstance.Data,uVar15);
          FVar12.Data = local_160.Data.AllocatorInstance.Data;
        }
        if (FVar12.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar12.Data);
        }
        if (param_4 != 0xffffffff) {
          local_1f0.ComparisonIndex.Value = 0;
          local_1f0.Number = 0;
          local_1f8.ComparisonIndex.Value = 0;
          local_1f8.Number = 0;
          if (*(longlong *)this != 0) {
            pUVar10 = Z_Construct_UClass_UAnimSequence_NoRegister();
            bVar8 = FObjectPtr::IsA((FObjectPtr *)this,pUVar10);
            if ((bVar8) && (*(longlong *)this != 0)) {
              plVar19 = (longlong *)(*(longlong *)this + 0x178);
LAB_14746c307:
              if (plVar19 != (longlong *)0x0) {
                uVar15 = **(uint **)(this + 0x68);
                if (-1 < (int)uVar15) {
                  uVar18 = 0;
                  if ((int)uVar15 < (int)plVar19[1]) {
                    uVar18 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar8 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  local_1f0 = *(FName *)(*plVar19 + (longlong)(int)uVar15 * 0xc);
                }
                uVar15 = *(uint *)(*(longlong *)(this + 0x68) + 8);
                if (-1 < (int)uVar15) {
                  uVar18 = 0;
                  if ((int)uVar15 < (int)plVar19[1]) {
                    uVar18 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar8 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  local_1f8 = *(FName *)(*plVar19 + (longlong)(int)uVar15 * 0xc);
                }
              }
            }
            else if (*(longlong *)this != 0) {
              pUVar10 = Z_Construct_UClass_UAnimMontage_NoRegister();
              bVar8 = FObjectPtr::IsA((FObjectPtr *)this,pUVar10);
              if ((bVar8) && (*(longlong *)this != 0)) {
                plVar19 = (longlong *)(*(longlong *)this + 0x130);
                goto LAB_14746c307;
              }
            }
          }
          FName::ToString(&local_1f8,local_d0);
          FName::ToString(&local_1f0,&local_e0);
          FString::PrintfImpl(&local_140,L" Prev(%s, i:%d, t:%.3f) Next(%s, i:%d, t:%.3f)");
          iVar16 = local_140.Data.ArrayNum + -1;
          if (local_140.Data.ArrayNum == 0) {
            iVar16 = 0;
          }
          FString::AppendChars(&local_1d8,(wchar_t *)local_140.Data.AllocatorInstance.Data,iVar16);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0[0].Data.AllocatorInstance.Data);
          }
        }
        FDisplayDebugManager::DrawString(param_8,&local_1d8,local_res18);
        if (*(longlong *)this != 0) {
          pUVar10 = Z_Construct_UClass_UBlendSpace_NoRegister();
          bVar8 = FObjectPtr::IsA((FObjectPtr *)this,pUVar10);
          if ((((bVar8) && (local_1e8 = *(longlong *)this, local_1e8 != 0)) && (param_9)) &&
             ((puVar1 = *(undefined8 **)(this + 0x48), puVar1 != (undefined8 *)0x0 &&
              (iVar16 = *(int *)(puVar1 + 1), 0 < iVar16)))) {
            local_210.Data = (FScriptContainerElement *)0x0;
            pFVar2 = (FBlendSampleData *)*puVar1;
            local_208 = iVar16;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,iVar16,0,&local_210,iVar16,&local_204);
            ConstructItems<FBlendSampleData,FBlendSampleData,int>(local_210.Data,pFVar2,iVar16);
            AlgoImpl::
            IntroSortInternal<FBlendSampleData,int,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,_OutputTickRecords_::__l37::<lambda_1>_>_>
                      ((FBlendSampleData *)local_210.Data,local_208,local_res8,
                       (<lambda_1> *)local_218);
            local_res18[0] = local_res18[0] + fVar6;
            FString::PrintfImpl(&local_130,L"X=%3.3f Y=%3.3f Z=%3.3f");
            FString::PrintfImpl(&local_f0,L"Blendspace Input (%s)");
            if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_130.Data.AllocatorInstance.Data);
            }
            FDisplayDebugManager::DrawString(param_8,&local_f0,local_res18);
            uVar15 = 0;
            lVar20 = 0;
            uVar18 = 0;
            iVar16 = *(int *)(local_1e8 + 0x110);
            if (0 < iVar16) {
              lVar17 = 0;
              lVar14 = local_1e8;
              do {
                uVar9 = 0;
                if ((int)uVar18 < iVar16) {
                  uVar9 = ~uVar18 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar8 = FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                fVar22 = 0.0;
                lVar3 = *(longlong *)(lVar14 + 0x108);
                if ((int)uVar15 < local_208) {
                  lVar13 = lVar20 * 0x60;
                  iVar16 = local_208;
                  do {
                    uVar9 = 0;
                    if ((int)uVar15 < iVar16) {
                      uVar9 = ~uVar15 >> 0x1f;
                    }
                    if ((uVar9 == 0) &&
                       (bVar8 = FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), iVar16 = local_208, bVar8)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    lVar14 = local_1e8;
                    if (*(uint *)(local_210.Data + lVar13) == uVar18) {
                      fVar21 = *(float *)(local_210.Data + lVar13 + 0x10);
                      if (fVar5 <= *(float *)(local_210.Data + lVar13 + 0x10)) {
                        fVar21 = fVar5;
                      }
                      if (fVar21 <= 0.0) {
                        fVar21 = 0.0;
                      }
                      fVar22 = fVar22 + fVar21;
                    }
                    else if ((int)uVar18 < (int)*(uint *)(local_210.Data + lVar13)) break;
                    uVar15 = uVar15 + 1;
                    lVar20 = lVar20 + 1;
                    lVar13 = lVar13 + 0x60;
                  } while ((int)uVar15 < iVar16);
                }
                local_res18[0] = local_res18[0] + fVar6;
                pFVar11 = param_7;
                if (0.0 < fVar22) {
                  pFVar11 = param_5;
                }
                lVar13 = *(longlong *)((longlong)&pFVar11->field0_0x0 + 8);
                (param_8->DebugTextItem)._padding_ = *(longlong *)&pFVar11->field0_0x0;
                (param_8->DebugTextItem)._padding_ = lVar13;
                local_1a8 = *(FName *)(*(longlong *)(lVar3 + lVar17) + 0x18);
                FName::ToString(&local_1a8,&local_120);
                FString::PrintfImpl(&local_100,L"%s W:%.1f%%");
                if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_120.Data.AllocatorInstance.Data);
                }
                FDisplayDebugManager::DrawString(param_8,&local_100,local_res18);
                if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_100.Data.AllocatorInstance.Data);
                }
                uVar18 = uVar18 + 1;
                local_res18[0] = local_res18[0] + fVar7;
                lVar17 = lVar17 + 0x30;
                iVar16 = *(int *)(lVar14 + 0x110);
                uVar9 = local_200;
              } while ((int)uVar18 < iVar16);
            }
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
            local_res18[0] = local_res18[0] + fVar7;
            DestructItems<FBlendSampleData,int>((FBlendSampleData *)local_210.Data,local_208);
            if ((FBlendSampleData *)local_210.Data != (FBlendSampleData *)0x0) {
              FMemory::Free(local_210.Data);
            }
          }
        }
        param_4 = local_res20;
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          param_4 = local_res20;
        }
      }
      else {
        *(FLinearColor_u_0 *)&(param_8->DebugTextItem)._padding_ =
             (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
        local_1c8 = *(FName *)(*(longlong *)(*(longlong *)this + 0x10) + 0x18);
        FName::ToString(&local_1c8,&local_190);
        local_1c0 = *(FName *)(*(longlong *)this + 0x18);
        FName::ToString(&local_1c0,&local_1a0);
        FString::PrintfImpl(&local_110,
                            L"%i) %s (%s) W(%.f%%) - Push to ungrouped as it failed to be leader.");
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
        FDisplayDebugManager::DrawString(param_8,&local_110,local_res18);
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
      }
      local_200 = uVar9 + 1;
      local_1e0 = local_1e0 + 0x78;
      iVar16 = param_1->ArrayNum;
    } while ((int)local_200 < iVar16);
  }
  return;
}

// PadMemoryReader @ 14746c970

void __cdecl PadMemoryReader(FMemoryReader *param_1,uchar **param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)*param_2;
  lVar2 = (longlong)((param_3 + -1 + iVar1 & -param_3) - iVar1);
  (**(code **)(param_1->_padding_ + 0x188))(param_1,*param_2,lVar2);
  *param_2 = *param_2 + lVar2;
  return;
}

// PadMemoryWriter @ 14746c9c0

void __cdecl PadMemoryWriter(FMemoryWriter *param_1,uchar **param_2,int param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 local_res18 [8];
  
  local_res18[0] = 0x55;
  uVar2 = (param_3 + -1 + *(int *)param_2 & -param_3) - *(int *)param_2;
  if (0 < (int)uVar2) {
    uVar1 = (ulonglong)uVar2;
    do {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    *param_2 = *param_2 + (int)uVar2;
    return;
  }
  *param_2 = *param_2 + (int)uVar2;
  return;
}

// TimeToIndex @ 14747b8f0

float __cdecl
AnimEncoding::TimeToIndex
          (EAnimInterpolationType param_1,int param_2,uchar *param_3,float param_4,int param_5,
          int *param_6,int *param_7)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  if ((param_5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumKeys != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AnimEncoding.h"
                         ,0x20d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar11 = (float)(*pcVar1)();
    return fVar11;
  }
  iVar4 = param_5 + -1;
  if ((param_5 < 2) || (param_4 <= 0.0)) {
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    if (param_4 < __real_3f800000) {
      fVar11 = (float)(param_2 + -1) * param_4;
      iVar3 = (int)fVar11;
      iVar9 = param_2 + -2;
      if (iVar3 < param_2 + -2) {
        iVar9 = iVar3;
      }
      iVar8 = 0;
      iVar3 = 0;
      if (0 < iVar9) {
        iVar3 = iVar9;
      }
      iVar9 = iVar4;
      if ((int)((float)iVar4 * param_4) < iVar4) {
        iVar9 = (int)((float)iVar4 * param_4);
      }
      iVar10 = 0;
      if (0 < iVar9) {
        iVar10 = iVar9;
      }
      if (param_2 < 0x100) {
        if (iVar3 < (int)(uint)param_3[iVar10]) {
          iVar10 = iVar10 + -1;
          lVar6 = (longlong)iVar10;
          iVar9 = iVar8;
          if (0 < iVar10) {
            do {
              iVar9 = iVar10;
              if ((int)(uint)param_3[lVar6] <= iVar3) break;
              iVar10 = iVar10 + -1;
              lVar6 = lVar6 + -1;
              iVar9 = iVar8;
            } while (0 < lVar6);
          }
        }
        else {
          iVar10 = iVar10 + 1;
          for (lVar6 = (longlong)iVar10; iVar9 = iVar4, lVar6 <= iVar4; lVar6 = lVar6 + 1) {
            if (iVar3 < (int)(uint)param_3[lVar6]) {
              iVar9 = iVar10 + -1;
              break;
            }
            iVar10 = iVar10 + 1;
          }
        }
        *param_6 = iVar9;
        iVar3 = iVar9 + 1;
        uVar7 = (uint)param_3[iVar9];
        *param_7 = iVar3;
        if (iVar4 < iVar3) {
          *param_7 = iVar4;
          iVar3 = iVar4;
        }
        uVar5 = (uint)param_3[iVar3];
      }
      else {
        if (iVar3 < (int)(uint)*(ushort *)(param_3 + (longlong)iVar10 * 2)) {
          iVar10 = iVar10 + -1;
          lVar6 = (longlong)iVar10;
          iVar9 = iVar8;
          if (0 < iVar10) {
            do {
              iVar9 = iVar10;
              if ((int)(uint)*(ushort *)(param_3 + lVar6 * 2) <= iVar3) break;
              iVar10 = iVar10 + -1;
              lVar6 = lVar6 + -1;
              iVar9 = iVar8;
            } while (0 < lVar6);
          }
        }
        else {
          iVar10 = iVar10 + 1;
          for (lVar6 = (longlong)iVar10; iVar9 = iVar4, lVar6 <= iVar4; lVar6 = lVar6 + 1) {
            if (iVar3 < (int)(uint)*(ushort *)(param_3 + lVar6 * 2)) {
              iVar9 = iVar10 + -1;
              break;
            }
            iVar10 = iVar10 + 1;
          }
        }
        *param_6 = iVar9;
        iVar3 = iVar9 + 1;
        uVar7 = (uint)*(ushort *)(param_3 + (longlong)iVar9 * 2);
        *param_7 = iVar3;
        if (iVar4 < iVar3) {
          *param_7 = iVar4;
          iVar3 = iVar4;
        }
        uVar5 = (uint)*(ushort *)(param_3 + (longlong)iVar3 * 2);
      }
      if (param_1 == Step) {
        return 0.0;
      }
      iVar4 = 1;
      if (1 < (int)(uVar5 - uVar7)) {
        iVar4 = uVar5 - uVar7;
      }
      return (fVar11 - (float)uVar7) / (float)iVar4;
    }
    *param_6 = iVar4;
    *param_7 = iVar4;
  }
  return 0.0;
}

// Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_NoRegister @ 147483940

UClass * __cdecl Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_BitwiseCompressOnly",
               &Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.InnerSingleton,
               UAnimCompress_BitwiseCompressOnly::
               StaticRegisterNativesUAnimCompress_BitwiseCompressOnly,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_BitwiseCompressOnly>,
               InternalVTableHelperCtorCaller<UAnimCompress_BitwiseCompressOnly>,local_res8,
               UAnimCompress::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.InnerSingleton;
}

// Z_Construct_UClass_UAnimCompress_LeastDestructive_NoRegister @ 147483a00

UClass * __cdecl Z_Construct_UClass_UAnimCompress_LeastDestructive_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_LeastDestructive",
               &Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.InnerSingleton,
               UAnimCompress_LeastDestructive::StaticRegisterNativesUAnimCompress_LeastDestructive,
               0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCompress_LeastDestructive>,
               InternalVTableHelperCtorCaller<UAnimCompress_LeastDestructive>,local_res8,
               UAnimCompress_BitwiseCompressOnly::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.InnerSingleton;
}

// Z_Construct_UClass_UAnimCompress_PerTrackCompression_NoRegister @ 147483ac0

UClass * __cdecl Z_Construct_UClass_UAnimCompress_PerTrackCompression_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_PerTrackCompression",
               &Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.InnerSingleton,
               UAnimCompress_PerTrackCompression::
               StaticRegisterNativesUAnimCompress_PerTrackCompression,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_PerTrackCompression>,
               InternalVTableHelperCtorCaller<UAnimCompress_PerTrackCompression>,local_res8,
               UAnimCompress_RemoveLinearKeys::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.InnerSingleton;
}

// Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_NoRegister @ 147483b80

UClass * __cdecl Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_RemoveEverySecondKey",
               &Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.InnerSingleton,
               UAnimCompress_RemoveEverySecondKey::
               StaticRegisterNativesUAnimCompress_RemoveEverySecondKey,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_RemoveEverySecondKey>,
               InternalVTableHelperCtorCaller<UAnimCompress_RemoveEverySecondKey>,local_res8,
               UAnimCompress::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.InnerSingleton;
}

// Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_NoRegister @ 147483c40

UClass * __cdecl Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_RemoveLinearKeys",
               &Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.InnerSingleton,
               UAnimCompress_RemoveLinearKeys::StaticRegisterNativesUAnimCompress_RemoveLinearKeys,
               0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCompress_RemoveLinearKeys>,
               InternalVTableHelperCtorCaller<UAnimCompress_RemoveLinearKeys>,local_res8,
               UAnimCompress::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.InnerSingleton;
}

// Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_NoRegister @ 147483d00

UClass * __cdecl Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_RemoveTrivialKeys",
               &Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.InnerSingleton,
               UAnimCompress_RemoveTrivialKeys::StaticRegisterNativesUAnimCompress_RemoveTrivialKeys
               ,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCompress_RemoveTrivialKeys>,
               InternalVTableHelperCtorCaller<UAnimCompress_RemoveTrivialKeys>,local_res8,
               UAnimCompress::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.InnerSingleton;
}

// Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_NoRegister @ 147483dc0

UClass * __cdecl Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionCodec_CompressedRichCurve",
               &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.
                InnerSingleton,
               UAnimCurveCompressionCodec_CompressedRichCurve::
               StaticRegisterNativesUAnimCurveCompressionCodec_CompressedRichCurve,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCurveCompressionCodec_CompressedRichCurve>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_CompressedRichCurve>,
               local_res8,UAnimCurveCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.InnerSingleton;
}

// Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_NoRegister @ 147483e80

UClass * __cdecl Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionCodec_UniformIndexable",
               &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.
                InnerSingleton,
               UAnimCurveCompressionCodec_UniformIndexable::
               StaticRegisterNativesUAnimCurveCompressionCodec_UniformIndexable,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCurveCompressionCodec_UniformIndexable>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_UniformIndexable>,
               local_res8,UAnimCurveCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.InnerSingleton;
}

// Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_NoRegister @ 147483f40

UClass * __cdecl Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionCodec_UniformlySampled",
               &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.
                InnerSingleton,
               UAnimCurveCompressionCodec_UniformlySampled::
               StaticRegisterNativesUAnimCurveCompressionCodec_UniformlySampled,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCurveCompressionCodec_UniformlySampled>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_UniformlySampled>,
               local_res8,UAnimCurveCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.InnerSingleton;
}

// Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister @ 147484000

UClass * __cdecl Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionSettings",
               &Z_Registration_Info_UClass_UAnimCurveCompressionSettings.InnerSingleton,
               UAnimCurveCompressionSettings::StaticRegisterNativesUAnimCurveCompressionSettings,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCurveCompressionSettings>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionSettings.InnerSingleton;
}

// Z_Construct_UClass_UAnimDataModel_NoRegister @ 1474840b0

UClass * __cdecl Z_Construct_UClass_UAnimDataModel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimDataModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimDataModel",
               &Z_Registration_Info_UClass_UAnimDataModel.InnerSingleton,
               UAnimDataModel::StaticRegisterNativesUAnimDataModel,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimDataModel>,
               InternalVTableHelperCtorCaller<UAnimDataModel>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimDataModel.InnerSingleton;
}

// Z_Construct_UClass_UAnimationDataController_NoRegister @ 147484160

UClass * __cdecl Z_Construct_UClass_UAnimationDataController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationDataController.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationDataController",
               &Z_Registration_Info_UClass_UAnimationDataController.InnerSingleton,
               UAnimationDataController::StaticRegisterNativesUAnimationDataController,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationDataController>,
               InternalVTableHelperCtorCaller<UAnimationDataController>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationDataController.InnerSingleton;
}

// Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature @ 147484170

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult @ 1474841b0

UEnum * __cdecl Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult(void)

{
  if (Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.InnerSingleton == (UEnum *)0x0
     ) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAnimExecutionContextConversionResult.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EDrawDebugItemType @ 1474841f0

UEnum * __cdecl Z_Construct_UEnum_Engine_EDrawDebugItemType(void)

{
  if (Z_Registration_Info_UEnum_EDrawDebugItemType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDrawDebugItemType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDrawDebugItemType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FA2CSPose @ 147484230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FA2CSPose(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FA2CSPose.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FA2CSPose.InnerSingleton,
               &Z_Construct_UScriptStruct_FA2CSPose_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FA2CSPose.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FA2CSPose.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext @ 1474842b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimComponentSpacePoseContext.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimComponentSpacePoseContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimComponentSpacePoseContext.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimComponentSpacePoseContext.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimCurveParam @ 147484330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimCurveParam(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimCurveParam.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimCurveParam.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimCurveParam_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimCurveParam.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimCurveParam.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimInitializationContext @ 1474843b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimInitializationContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimInitializationContext.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimInitializationContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimInitializationContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimInitializationContext.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimInitializationContext.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimInstanceProxy @ 147484430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimInstanceProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimInstanceProxy.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimInstanceProxy.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimInstanceProxy.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimInstanceProxy.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimPoseContext @ 1474844b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimPoseContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimPoseContext.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimPoseContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimPoseContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimPoseContext.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimPoseContext.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimUpdateContext @ 147484530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimUpdateContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimUpdateContext.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimUpdateContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimUpdateContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimUpdateContext.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimUpdateContext.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCachedFloatCurve @ 1474845b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCachedFloatCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCachedFloatCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCachedFloatCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCachedFloatCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCachedFloatCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRawCurveTracks @ 147484630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRawCurveTracks(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRawCurveTracks.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRawCurveTracks.InnerSingleton,
               &Z_Construct_UScriptStruct_FRawCurveTracks_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRawCurveTracks.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRawCurveTracks.InnerSingleton;
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

// CurveWeights'' @ 1503e6d90

void __cdecl
`dynamic_atexit_destructor_for_'UE::Anim::FBaseBlendedCurve_DEPRECATED::CurveWeights__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Anim::FBaseBlendedCurve_DEPRECATED::CurveWeights.AllocatorInstance.Data;
  if (UE::Anim::FBaseBlendedCurve_DEPRECATED::CurveWeights.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Anim::FBaseBlendedCurve_DEPRECATED::CurveWeights.AllocatorInstance.Data !=
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

// ValidCurveWeights'' @ 1503e6db0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Anim::FBaseBlendedCurve_DEPRECATED::ValidCurveWeights__(void)

{
  ForElementType<unsigned_int> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = UE::Anim::FBaseBlendedCurve_DEPRECATED::ValidCurveWeights.AllocatorInstance.SecondaryData;
  if (UE::Anim::FBaseBlendedCurve_DEPRECATED::ValidCurveWeights.AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned_int>)0x0) {
    return;
  }
  if (UE::Anim::FBaseBlendedCurve_DEPRECATED::ValidCurveWeights.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimConstantKeyLerpISPCEnabled'' @ 1503e6dd0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimConstantKeyLerpISPCEnabled__(void)

{
  CVarAnimConstantKeyLerpISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimConstantKeyLerpISPCEnabled)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimPerTrackCompressionISPCEnabled'' @ 1503e6df0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimPerTrackCompressionISPCEnabled__(void)

{
  CVarAnimPerTrackCompressionISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimPerTrackCompressionISPCEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimVariableKeyLerpISPCEnabled'' @ 1503e6e10

void __cdecl _dynamic_atexit_destructor_for__CVarAnimVariableKeyLerpISPCEnabled__(void)

{
  CVarAnimVariableKeyLerpISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimVariableKeyLerpISPCEnabled)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarEarlyOutMontageWhenUninitialized'' @ 1503e6e30

void __cdecl
MontageCVars::_dynamic_atexit_destructor_for__CVarEarlyOutMontageWhenUninitialized__(void)

{
  CVarEarlyOutMontageWhenUninitialized._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEarlyOutMontageWhenUninitialized);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFlushCompletedMontagesOnPlay'' @ 1503e6e50

void __cdecl MontageCVars::_dynamic_atexit_destructor_for__CVarFlushCompletedMontagesOnPlay__(void)

{
  CVarFlushCompletedMontagesOnPlay._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFlushCompletedMontagesOnPlay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRK4SpringInterpolatorMaxIter'' @ 1503e6e70

void __cdecl _dynamic_atexit_destructor_for__CVarRK4SpringInterpolatorMaxIter__(void)

{
  CVarRK4SpringInterpolatorMaxIter._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRK4SpringInterpolatorMaxIter);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRK4SpringInterpolatorUpdateRate'' @ 1503e6e90

void __cdecl _dynamic_atexit_destructor_for__CVarRK4SpringInterpolatorUpdateRate__(void)

{
  CVarRK4SpringInterpolatorUpdateRate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRK4SpringInterpolatorUpdateRate);
  return;
}

// `dynamic_atexit_destructor_for_'LogAnimNotify'' @ 1503e6eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnimNotify__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnimNotify);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_Animation'' @ 1503e6ed0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Animation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Animation.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Animation.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Animation.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

